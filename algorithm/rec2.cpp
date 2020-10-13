//ループの再帰定義
//末尾再帰ではない例
#include <iostream>
#include <exception>
using namespace std;

//単位処理
void prt(int i){
	printf("%d",i);
}

//再帰定義
void rec(int n){
	if(n==0){
		//起点
		return;}
	else{
		rec(n-1);
		prt(n);
	}
}

int main(){
	int n;
	printf("Enter integer:");
	scanf("%d",&n);
	printf("\n");
	
	/*
	//ループ：n=65000で確認
	printf("loop:\n");
	for(int i=0;i<n;i++){prt(i+1);}
	printf("\n");
	*/
	
	/*再帰
	上限t: 64000<=t<65000
	エラー出力できず
	*/
	printf("recursive:\n");
	try{
		rec(n);
	}catch(exception& e){
		printf("ERROR!!");
	}
	
	return 0;
}