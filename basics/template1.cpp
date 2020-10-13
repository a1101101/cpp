//微分係数を求める
#include <iostream>
#include <vector>
using namespace std;

template <class poly>
poly dif(poly p){
	poly q;
	for(int i=1;i<p.size();i++){
		q.push_back(i*p[i]);
	}
	return q;
}

int main(){
	printf("Enter degree of polynominal:");
	int n; scanf("%d",&n);
	
	printf("Enter coefficients from 0th to %dth degree:\n",n);
	int k; vector<int> p;
	for(int i=0;i<=n;i++){cin>>k;p.push_back(k);}
	
	vector<int> q;
	q = dif<vector<int>>(p);
	
	printf("Differential coefficients of the polynominal:\n");
	for(int i=0;i<q.size();i++){
		printf("%d ",q[i]);
	}
	
	return 0;
}
