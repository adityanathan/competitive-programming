#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

vector<long long> v;

long long f(long long n){
	if(n<=0)
		return 0;
	// cout<<n<<" ";
	if(v[n]==0)
		v[n]=8*(n)*(n)+f(n-1);
	return v[n];
}

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t;
	cin>>t;
	v = vector<long long> (250000,0);
	while(t--){
		cin>>n;
		cout<<f(n/2)<<endl;
	}
	return 0;
}


