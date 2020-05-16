//ラムダ式のキャプチャ演算子を用いて、スコープ外の変数を操作する例
#include <iostream>
#include <vector>
using namespace std;

int main(){
	//変数と入力
	int n; cin>>n;
	vector<int> v;
	
	//fの定義
	auto f = [&v](int n){
		for(int i=0;i<n;i++){
			v.push_back(i);
		}
	};
	
	//fの実行
	f(n);
	
	//vの中身
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<' ';
	}
	
	return 0;
}
