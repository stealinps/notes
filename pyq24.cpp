#include <iostream>

int main(){
	int A[10]={0,1,2,3,4,5,6,7,8,9};
	int B[18]={0,-1,-2,-3,-4,-5,-6,-7,-8,
		-9,-10,-11,-12,-13,-14,-15,-16,-17};
	int C[8]={0,1,2,3,4,5,6,7};
	int i,j,temp;

	for(i=0;i<10;i++){
		std::cout<<A[i]<<"\n";
	}
	for(i=0;i<18;i++){
		std::cout<<B[i]<<"\n";
	}
	for(i=0;i<8;i++){
		std::cout<<C[i]<<"\n";
	}
	for(i=1;i<=8;i=i+2){
		for(j=0;j<2;j++){
			temp=C[i-j];
			C[i-j]=B[i];
			B[i]=temp;

			temp=C[i];
			C[i]=B[i-j];
			B[i-j]=temp;
		} // Constant time, will only run 2 time 
	} //Linear time, will run n/2 time
	temp=A[0];
	for(i=0;i<9;i++){
		A[i]=A[i+1];
	}
	A[9]=B[17];
	for(i=17;i>9;i=i-2){
		B[i]=B[i-2];
	}
	B[9]=temp;
	for(i=0;i<10;i++){
		std::cout<<A[i]<<"\n";
	}
	for(i=0;i<18;i++){
		std::cout<<B[i]<<"\n";
	}
	for(i=0;i<8;i++){
		std::cout<<C[i]<<"\n";
	}

}

//this program is O(N)
