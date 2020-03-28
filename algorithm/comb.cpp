/*組合せ*/
#include <iostream>
#define ll long long
using namespace std;

//n_C_k
ll comb(ll n,ll k,ll f[]){
	return f[n]/(f[k]*f[n-k]);
	}

int main(){
	int n; cin>>n;
	
	//factorial table
	ll fact[n+1]; fact[0]=1;
	for(int i=1;i<=n;i++){fact[i]=i*fact[i-1];}
	
	for(int i=0;i<=n;i++){
		cout<<comb(n,i,fact)<<endl;
	}
	
	return 0;
}