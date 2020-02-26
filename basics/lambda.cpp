#include <iostream>
using namespace std;

void func(int i, int j){
	cout << i+j << endl;
}

int main(){
	int a; int b;
	cin >> a >> b;
	
	func(a, b);
	
	//lambda expression
	auto lfunc = [](int i, int j){cout << i+j;};
	lfunc(a, b);
	
	return 0;
}
