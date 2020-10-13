/*
スタックオーバーフローになりそうな例

入力されたnに対し、1から昇順にnまでを出力する。
再帰呼び出しが末尾ではないため、通常通りにスタックが積まれて上限を超えればオーバーフローするはず？
*/
#include <iostream>
using namespace std;

//単位処理
void prt(int i){
	printf("%d\n",i);
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
