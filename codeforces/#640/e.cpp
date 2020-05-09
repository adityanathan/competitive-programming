#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,x,c;
	cin>>t;

	while(t--){
		cin>>n;
		vector<int> a(n),sum(n+1,0);
		unordered_map<int,int> m;
		c=0;
		forn(i,n){
			cin>>a[i];
			sum[i+1]=sum[i]+a[i];
			m[sum[i]]=i;
		}
		m[sum[n]]=n;
		forn(i,n){
			x = a[i];
			forn(j,n){
				if(m.find(x+sum[j])!=m.end()){
					if(j+1<m[x+sum[j]]){
						c++;
						break;
					}
				}
			}
		}
		cout<<c<<endl;
	}
	return 0;
}


