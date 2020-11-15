#include <bits/stdc++.h>
using namespace std;
#define forn(i,x,n) for(int i = x; i < n; ++i)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,ans=0,best=1e9;
    
    cin>>n;
    vector<int> a(n);
    forn(i,0,n)
        cin>>a[i];
    vector<int>  m(32),all(33);
    forn(i,0,n)
        m[1+(a[i]?(int)(log2(a[i])):0)]++;

    forn(i,0,32)
        all[i+1]=all[i]+m[i];
    forn(dig,1,32){
        ans+=max(m[32-dig]-1,0);
        best=min(best,ans+max(all[31-dig]-1,0));
    }
    cout<<min(best,all[31]-1)<<'\n';
    return 0;
}