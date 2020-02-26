#include <iostream>
using namespace std;

int main(){
	int *p;
	p = (int *)malloc(sizeof(int));
	
	if(p==NULL) exit(1);
	
	printf("Enter an integer:");
	scanf("%d",p);
	printf("Your integer is:%d",*p);
	
	return 0;
}
