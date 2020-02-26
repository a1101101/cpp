#include <iostream>
using namespace std;

int main(){
	int a[3];
	printf("Enter 3 integers.\n");
	for(int i=0; i<3; i++){
		printf("int%d: ", i+1);
		scanf("%d",&a[i]);
	}
	
	int M,m,mid;
	if(a[0]<=a[1]){m=a[0]; M=a[1];}
	else{m=a[1]; M=a[0];}
	
	if(a[2]>=M){mid=M;}
	else if(a[2]<=m){mid=m;}
	else{mid=a[2];}
	
	printf("Mid: %d",mid);
	
	return 0;
}
