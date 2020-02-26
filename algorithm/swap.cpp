#include <iostream>
using namespace std;

void swap(int *a,int *b){
	*a = *a+*b;
	*b = *a-*b;
	*a = *a-*b;
}

int main(){
	int a=0;
	int b=1;
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	
	return 0;
}
