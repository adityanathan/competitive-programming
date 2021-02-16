#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,aa,t;
    cin>>t;

    while(t--){
        cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++)
            cin>>aa, m[aa]++;
        vector<int> a;
        for(auto x:m)
            a.push_back(x.second);
        sort(a.begin(),a.end());
        long long ans=0, tot=0, z=a.size();
        for(auto x:a)
            ans=max(ans,x*(z-tot)), tot++;
        
        cout<<n-ans<<'\n';
    }
    return 0;
}