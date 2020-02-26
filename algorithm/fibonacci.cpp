#include <iostream>
using namespace std;

int fibo(int n){
	if(n<=0){return 0;}
	if(n==1||n==2){return 1;}
	else{return fibo(n-1)+fibo(n-2);}
}

int main(){
	int n;
	printf("Enter integer:");
	scanf("%d",&n);
	
	printf("The %d th number of fibonacci is %d.",n,fibo(n));
	
	return 0;
}
