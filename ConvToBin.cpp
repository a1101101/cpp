//Integerを入力→2進数に変換
#include <iostream>
#include <stack>
using namespace std;

int main(){
	int input,b; input=0;
	stack<int> out;
	
	printf("Enter an integer: ");
	scanf("%d",&input);
	while(input>0){
		b = input%2;
		out.push(b);
		input = (input-b)/2;
	}
	
	cout << "Size of stack: " << out.size() << endl;
	
	printf("Your integer converted in binary digits: ");
	while(out.size()>0){
		cout << out.top();
		out.pop();
	}
	
	return 0;
}