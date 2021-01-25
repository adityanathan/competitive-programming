#include <bits/stdc++.h>
using namespace std;
#define forn(i,m,n) for(int i = m; i < n; i++)
int main(){
    int a,b,k,t,y;
    cin>>t;

    while(t--){
        cin>>a>>b>>k;
        long long ans=0;
        vector<vector<int>> adj(a), adj2(b);
        vector<int> x(k);
        forn(i,0,k)
        	cin>>x[i];
        forn(i,0,k)
        	cin>>y, adj[x[i]-1].push_back(y-1), adj2[y-1].push_back(x[i]-1);

        forn(i,0,a){
        	for(auto x:adj[i])
        		ans+=k+1-adj[i].size()-adj2[x].size();
        }

        cout<<ans/2<<'\n';
    }
    return 0;
}