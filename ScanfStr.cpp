//scanf->coutだと失敗する
#include <iostream>
using namespace std;

int main(){
	string s;
	printf("Enter a string: ");
	scanf("%s",&s);
	printf("Your input: %s",s);
	return 0;
}