#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,t=1,pos,neg;
	bool flag;

	while(t--){
		cin>>n;
		vector<long long> a(n),sum(n),v;
		cin>>a[0];
		sum[0]=a[0];
		forn(i,n-1){
			cin>>a[i+1];
			sum[i+1]=sum[i]+a[i+1];
		}
		map<long long,vector<int> > m;
		forn(i,n){
			m[sum[i]].push_back(i);
			}
		for(auto it=m.begin();it!=m.end();it++){
			v=it->seccond;
			if(v.size()<2)
				continue;
			
		}
	}
	return 0;
}
