#include <iostream>
using namespace std;

int comb(int n, int k){
	if(k>n){return 0;}
	else if(k==0||n==0){return 1;}
	else{return comb(n-1,k)+comb(n-1,k-1);}
}

int main(){
	
	int n,k; cin>>n>>k;
	printf("%d",comb(n,k));
	
	return 0;
}