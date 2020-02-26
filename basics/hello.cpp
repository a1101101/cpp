#include <iostream>
#include <string.h>
using namespace std;

class Hello {
	public:
		string str;
		void print(){
			cout << str;
		}
} obj;

int main() {
	obj.str = "Hello";
	cout << obj.str << endl;
	obj.print();
	return 0;
}
