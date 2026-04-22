//Created by Syazwan Nur Iman 
 
/*Question 1
//This program uses recursive technique to swap between the values between the 2 arrays and passing by pointer
//I mainly uses these technique to deepening my concept about recursion and pointer
//I m aware of the limitations and risks of using recursive approach compared to iterative approach
#include <iostream>
const int size=18;
void swp(int A[],int C[],int *chunk){ //2. taking the pointer of i
	int temp;
	int j;
	for(j=0;j<3;j++){
		temp=A[j+3*(*chunk)];
		//saved the value of A of the index within a chunk to temp
		A[j+3*(*chunk)]=C[2+3*(*chunk)-j];
		//Basically assign the value in the reversed index within a specific chunk
		// at chunk=0 A[0]<-C[2] A[1]<-C[1] A[2]<-C[0]
		// at chunk=1 A[3]<-C[5] A[4]<-C[4] A[5]<-C[3] 
		// and so on untill all the chunks is finished
		C[2+3*(*chunk)-j]=temp;
		//assign the saved value to the C array with reversed index 
		}
	//swapping between the A array with its corresponding reversed index C array
	(*chunk)++;
	//goes to the next chunk
	if(*chunk<size/3) swp(A,C,chunk);
	//calls recursively
}
//Recursively calls the function within itself untill the "chunks" of the arrays is completed
//Chunks is a division within the arrays containing 3 elements
void display(int A[],int C[]){
	int i; std::cout<<"A   C"<<std::endl;
	for(i=0;i<size;i++) std::cout<<A[i]<<" "<<C[i]<<std::endl;
}
//Display the values of the arrays
int main(){
	int A[size]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
	int C[size]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,
	-14,-15,-16,-17,-18};
	int i=0;
	std::cout<<"Before \n"; display(A,C);
	swp(A,C,&i);//1. passing the actual i into the function
	std::cout<<"After \n"; display(A,C);
}
*/
//Question 2
#include <iostream>
const int size=20;
const int chunk=3;
//red
int swp(int A[],int C[]){
	int temp;
	int j;
	for(j=1;chunk*j<=size;j++){
		temp=A[chunk*j-1];
		A[chunk*j-1]=C[chunk*j-1];
		C[chunk*j-1]=temp;
	}
	return 0;
}

void display(int A[],int R[]){
	int i;
	std::cout<<"A   R"<<std::endl;
	for(i=0;i<size;i++)
		std::cout<<A[i]<<" "<<R[i]<<std::endl;
}

int circle(int A[], int R[], int *dir){
	int i,temp;
	//counter clockwise 
	if(*dir==2){
		temp=A[1];
		for(i=1;i+chunk<size;i=i+chunk) A[i]=A[i+chunk];
		A[size-1]=R[size-1];
		for(i=size-1;i-chunk>=0;i=i-chunk) R[i]=R[i-chunk];
		R[1]=temp;
		(*dir)--;
		return circle(A,R,dir);
	}
	//clockwise
	else if(*dir==1){
		temp=A[size-2];
		for(i=size-2;i-3>=0;i=i-chunk) A[i]=A[i-chunk];
		A[0]=R[0];
		for(i=0;i+chunk<size;i=i+chunk) R[i]=R[i+chunk];
		R[size-2]=temp;
		(*dir)--;
		return circle(A,R,dir);
    }
	return 0;
}
int main(){
	int A[size]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int R[size]={0,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,-14,-15,-16,-17,-18,-19};
	int i=0; int direction=2;
	std::cout<<"Before \n"; display(A,R);
	circle(A,R,&direction); swp(A,R);
	std::cout<<"After \n"; display(A,R);
}//
