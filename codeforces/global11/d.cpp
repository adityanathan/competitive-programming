#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q,t;
    bool f;
    string ans;
    cin>>t;

    while(t--){
        cin>>n;
        vector<pair<int,int>> a(n);
        vector<int> pos(n+1);
        ans="";
        q=0;
        forn(i,0,n)
            cin>>a[i].first, pos[a[i].first]=i, a[i].second=1;
        while(n>1){
            f=true;
            forn(i,1,n){
                if(pos[i+1]<pos[i]){
                    int j=0,cnt=0;
                    vector<int> itr;
                    while(j<pos[i+1])
                        cnt+=a[j].second, j++;
                    if(cnt)
                        itr.push_back(j);
                    itr.push_back(a[j].second)
                    itr.push_back()
                    q++;
                    f=false;
                }
            }
            if(f){
                cout<<q+1<<'\n';
                ans+=to_string(n)+'\n';
                forn(i,0,n)
                    ans+=to_string(a[i].second)+' ';
                ans+='\n';
                n=1;
                cout<<ans;
            }
        }
    }
    return 0;
}