/* Question 1
#include <iostream>
//Created by Syazwan Nur Iman 
const int size=18;
int swp(int A[],int C[],int *i){
	int temp;
	int j;
	for(j=0;j<3;j++){
		temp=A[j+3*(*i)];
		A[j+3*(*i)]=C[2+3*(*i)-j];
		C[2+3*(*i)-j]=temp;
	}
	(*i)++;
	if(*i<size/3)
		return swp(A,C,i);
	else
		return 1;
}

void display(int A[],int C[],int size){
	int i;
	std::cout<<"A   C"<<std::endl;
	for(i=0;i<size;i++)
		std::cout<<A[i]<<" "<<C[i]<<std::endl;
}

int main(){
	int A[size]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
	int C[size]={-1,-2,-3,-4,-5,-6,-7,-8,-9,
	-10,-11,-12,-13,-14,-15,-16,-17,-18};
	int i=0;
	swp(A,C,&i);
	display(A,C,size);
}
*/
//Question 2
#include <iostream>
const int size=20;
//red
int swp(int A[],int C[]){
	int temp;
	int j;
	for(j=1;3*j<=size;j++){
		temp=A[3*j-1];
		A[3*j-1]=C[3*j-1];
		C[3*j-1]=temp;
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
		for(i=1;i+3<size;i=i+3) A[i]=A[i+3];
		A[size-1]=R[size-1];
		for(i=size-1;i-3>=0;i=i-3) R[i]=R[i-3];
		R[1]=temp;
		(*dir)--;
		return circle(A,R,dir);
	}
	//clockwise
	else if(*dir==1){
		temp=A[size-2];
		for(i=size-2;i-3>=0;i=i-3) A[i]=A[i-3];
		A[0]=R[0];
		for(i=0;i+3<size;i=i+3) R[i]=R[i+3];
		R[size-2]=temp;
		(*dir)--;
		return circle(A,R,dir);
    }
	return 0;
}
int main(){
	int A[size]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int R[size]={0,-1,-2,-3,-4,-5,-6,-7,-8,-9,
	-10,-11,-12,-13,-14,-15,-16,-17,-18,-19};
	int i=0;
	int direction=2;
	circle(A,R,&direction);
	swp(A,R);
	display(A,R);
}
