#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,p,ans;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        cout<<"Case #"<<tc<<": ";
        cin>>n>>p;
        vector<int> a(n),pre(n+1);
        ans=2e9;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
            pre[i+1]=pre[i]+a[i];
        for(int i=p;i<=n;i++)
            ans=min(ans,a[i-1]*p-pre[i]+pre[i-p]);
        cout<<ans<<'\n';
    }
}