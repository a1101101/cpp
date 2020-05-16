/*
ラムダ式のキャプチャ演算子を用いて、スコープ外の変数を操作する例
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> v;
	
	auto f = [&v](int n){
		for(int i=0;i<n;i++){
			v.push_back(i);
		}
	};
	
	f(n);
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<' ';
	}
	
	return 0;
}