/*
ラムダ式のキャプチャ演算子を用いて、スコープ外の変数を操作する例
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	v.push_back(23);
	
	auto f = [&v](vector<int> v){
		for(int i=0;i<10;i++){
			v.push_back(i);
		}
	};
	
	f(v);
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<' ';
	}
	
	return 0;
}