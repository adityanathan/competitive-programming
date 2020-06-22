#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int p = 1000000007;

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long k,n,t;
	cin>>t;

	while(t--){
		cin>>n>>k;
		if(n==0)
			cout<<(k*(k-1))%p<<endl;
		else if(k%2)
			cout<<((n*n)%p+((k-1)*n)%p+((k*k-1)/4)%p)%p<<endl;
		else{
			k--;
			cout<<((n*n)%p+((k+1)*n)%p+((k*k-1)/4)%p)%p<<endl;
		}
	}
	return 0;
}


