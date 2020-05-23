#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,m,x,tot,cost,fin=1000000000;
	bool f;

	cin>>n>>m>>x;
	vector<int> c(n);
	vector<vector<int> > a(n,vector<int> (m));
	forn(i,n){
		cin>>c[i];
		forn(j,m)
			cin>>a[i][j];
	}
	tot = pow(2,n);
	forn(perm,tot){
		cost = 0;
		vector<int> skill(m,0);
		f=true;
		for(int i=1;i<tot;i*=2){
			if(perm&i){
				cost+=c[log2(i)];
				forn(j,m)
					skill[j]+=a[log2(i)][j];
			}
		}
		forn(j,m)
			if(skill[j]<x)
				f=false;
		if(f)
			fin=min(fin,cost);
	}
	cout<<(fin==1000000000?-1:fin)<<endl;

	return 0;
}


