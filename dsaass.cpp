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
	std::cout<<"A   B"<<std::endl;
	for(i=0;i<size;i++)
		std::cout<<A[i]<<" "<<C[i]<<std::endl;
}

int main(){
	int A[size]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
	int C[size]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,-14,-15,-16,-17,-18};
	int i=0;
	swp(A,C,&i);
	display(A,C,size);
}
