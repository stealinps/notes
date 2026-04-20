
//Question 1
//written by Syazwan Nur Iman 9:09am 20/4/26
const int size=18;
int j=0;
#include <iostream>
int swap(int A[],int C[],int i){
	int temp;
	while(j<3*i){
		temp=A[j];
		A[j]=C[2-j];
		C[2-j]=temp;
		j++;
	}
	i++;
	return 1;
}
void display(int A[],int C[],int size){
	int i;
	for(i=0;i<size;i++)
		std::cout<<A[i]<<" "<<C[i]<<std::endl;
}

int main(){
	int A[size]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
	int C[size]={-1,-2,-3,-4,-5,-6,-7,-8,-9,
	-10,-11,-12,-13,-14,-15,-16,-17,-18};
	int i=1;
	swap(A,C,i);
	i=i+3;
	swap(A,C,i);
	i=i+3;
	display(A,C,size);
}
