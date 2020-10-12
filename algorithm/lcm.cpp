//least common multiple
#include <iostream>
using namespace std;

int gcd(int a, int b){
	if(b==0){return a;}
	else{return gcd(b,a%b);}
}

int main(){
	int x,y;
	printf("Enter 2 integers:");
	scanf("%d %d",&x,&y);
	int z = x*y/(int)gcd(x,y);
	printf("least common multiple:%d",z);
}