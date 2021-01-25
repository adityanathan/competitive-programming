#include <bits/stdc++.h>
using namespace std;
#define forn(i,m,n) for(int i = m; i < n; i++)
int main(){
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n), v(200001), dp(200001);
        vector<vector<int>> adj(200001);
        forn(i,0,n)
            cin>>a[i], v[a[i]]++;

        sort(a.begin(),a.end());
        for(auto x:a){
            if(adj[x].size())
                continue;
            int i=2*x;
            while(i<200001){
                if(v[i])
                    adj[x].push_back(i);
                i+=x;
            }
        }
        int ans=n;
        for(int i=n-1;i>=0;i--){
            if(dp[a[i]])
                continue;
            else{
                dp[a[i]]=v[a[i]];
                for(auto x:adj[a[i]])
                    dp[a[i]]=max(dp[a[i]],v[a[i]]+dp[x]);
            }
            ans=min(ans,n-dp[a[i]]);
        }

        cout<<ans<<'\n';
    }
    return 0;
}