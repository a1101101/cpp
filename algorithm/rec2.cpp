//ループの再帰定義
//メモリ管理のない再帰は使わないのが原則
#include <iostream>
using namespace std;

//単位処理
void prt(int i){
	cout<<i<<endl;
}

//再帰定義
void rec(int n){
	if(n==0){
		return;}
	else{
		rec(n-1);
		prt(n-1);
	}
}

int main(){
	int n; scanf("%d",&n);
	
	//ループ
	for(int i=0;i<n;i++){prt(i);}
	
	//再帰
	rec(n);
	
	return 0;
}
