#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int f(string x){
	char mi='9',ma='0';
	forn(i,x.length()){
		mi=min(mi,x[i]);
		ma=max(ma,x[i]);
	}
	// cout<<mi<<" "<<ma<<"\n";
	return ((int)(mi-'0'))*((int)(ma-'0'));
}
int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long n,t,k;
	cin>>t;

	while(t--){
		cin>>n>>k;
		forn(i,k-1){
			n+=f(to_string(n));
			// cout<<"n "<<n<<"\n";
			if(f(to_string(n))==0)
				break;
		}
		cout<<n<<endl;
	}
	return 0;
}


