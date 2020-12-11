#include<bits/stdc++.h> // floyd warshall
using namespace std;
typedef long long ll;
#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	int n,m,x,y,w,q;
	cin>>n>>m>>q;
	vector<vector<ll>> dist(n,vector<ll>(n,1e18));
	forn(i,n)
		dist[i][i]=0;
	while(m--)
		cin>>x>>y>>w,
		dist[x-1][y-1]=dist[y-1][x-1]=min(1ll*w,dist[y-1][x-1]);

	forn(k,n)
		forn(i,n)
			forn(j,n)
				dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);

	while(q--)
		cin>>x>>y,
		cout<<(dist[x-1][y-1]==1e18?-1:dist[x-1][y-1])<<'\n';
}