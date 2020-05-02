#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t=1,r,c,ci,cj;

	while(t--){
		cin>>r>>c>>ci>>cj;
		forn(i,r){
			forn(j,c)
				if(abs(i-ci)>abs(j-cj))
					cout<<abs(i-ci)<<" ";
				else
					cout<<abs(j-cj)<<" ";
			cout<<"\n";
		}
	}
	return 0;
}


