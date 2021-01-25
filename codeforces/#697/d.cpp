#include <bits/stdc++.h>
using namespace std;
#define forn(i,m,n) for(int i = m; i < n; i++)
int main(){
    long long n,m,x,t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        long long pos=0;
        vector<long long> a(n), b[2], pre[2];
        forn(i,0,n)
        	cin>>a[i], pos+=a[i];
        forn(i,0,n)
        	cin>>x, b[x-1].push_back(a[i]);
        if(pos<m){
            cout<<"-1\n";
            continue;
        }
        long long ans=2*n;
        sort(b[0].rbegin(),b[0].rend());
        sort(b[1].rbegin(),b[1].rend());
        pre[0].push_back(0);
        pre[1].push_back(0);
        for(long long i=0;i<2;i++)
            for(auto x:b[i])
                pre[i].push_back(pre[i].back()+x);

        for(long long i=0;i<pre[0].size();i++)
            if(lower_bound(pre[1].begin(),pre[1].end(),m-pre[0][i])!=pre[1].end())
                ans=min(ans,i+2*(long long)(lower_bound(pre[1].begin(),pre[1].end(),m-pre[0][i])-pre[1].begin()));

        

        cout<<ans<<'\n';
    }
    return 0;
}