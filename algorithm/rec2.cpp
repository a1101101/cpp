//ループの再帰定義
#include <iostream>
using namespace std;

//単位処理
void prt(int n){
	cout<<n<<endl;
}

//再帰定義
void show(int n){
	if(n==0){
		prt(n);
		return;}
	else{
		show(n-1);
		prt(n);
	}
}

int main(){
	int n; scanf("%d",&n);
	show(n);
	return 0;
}