#include <iostream>
using namespace std;

void display(int data[],int size){
	int i;
	for(i=0;i<size;i++){
	cout<<i<<":"<<data[i]<<endl;
	}
}
int main(){
	int i;
	int A[20];
	for(i=0;i<20;i++){
		A[i]=1+2*i;
	}
	cout<<"BEFORE DATA EXCHANGE\n";
	cout<<"Content of Array A:\n";
	display(A,20);

	int B[15];
	for(i=0;i<15;i++){
		B[i]=5*i;
	}
	
	cout<<"\nContent of Array B:\n";
	display(B,15);

	int temp;
	for(i=0;i<10;i++){
		temp=A[5+i];
		A[5+i]=B[i];
		B[i]=temp;
	}

	cout<<"\nAFTER DATA EXCHANGE\n";
	cout<<"Content of Array A:\n";
	display(A,20);
	cout<<"Content of Array B:\n";
	display(B,15);
}
