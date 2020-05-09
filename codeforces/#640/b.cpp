#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,k,i;
	cin>>t;

	while(t--){
		cin>>n>>k;
		if(k>n || !(k&1) && (n&1)){
			cout<<"NO\n";
			continue;
		}
		if(k&1 && !(n&1)){
			if(2*k>n)
				cout<<"NO\n";
			else{
				cout<<"YES\n";
				i=0;
				while(i++<k-1)
					cout<<"2 ";
				cout<<n-(k-1)*2<<"\n";
			}
			continue;
		}
		else{
			i=0;
			cout<<"YES\n";
			while(i++<k-1)
					cout<<"1 ";
				cout<<n-(k-1)<<"\n";
		}
	}
	return 0;
}


