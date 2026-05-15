#include <iostream>

	//[0,1,2,3,4,5,6] 
	//   v       ^
	//[0,1,2,3,4,5,6] 
void circle(int A[],int B[],const int sizes){
	int temp,i,j;
	if(sizes%2==0) i=sizes-1;
	else i=sizes-2;
	temp=A[1];
	for(j=1;j<sizes;j=j+2){
		if(j+2>=sizes) break;
		A[j]=A[j+2];
	} //move odd indexes to the left
	A[i]=B[i];
	for(j=i;j>0;j=j-2){
		if(j-2<0) break;
		B[j]=B[j-2];
	} //move odd indexes to the right
	B[1]=temp;

}

int main(){
	const int sizes=7;
	int A[sizes];
	int B[sizes];
	

	int i;

	for(i=0;i<sizes;i++){
		A[i]=i;
		B[i]=i;
	}
	for(i=0;i<6;i++){
		circle(A,B,sizes);
	} //do 6 times
	for(i=0;i<sizes;i++){
		std::cout<<A[i]<<" ";
	}
	std::cout<<"\n";
	for(i=0;i<sizes;i++){
		std::cout<<B[i]<<" ";
	}
}
