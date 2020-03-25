#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
int main(){
	long long n,k,t,a;

	cin>>t;

	while(t--){
		cin>>n;
		map<int,bool> m;
		forn(i,n){
			cin>>k;
			forn(i,k){
				cin>>a;
				if (m.find(a)==m.end()){
					m[a]=true;
					while(++i<k){
						cin>>a;
					}
				}
			}
		}
		if(m.size()<n)
			forn(i,n)
				
	}
	return 0;
}
