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
    int n,t;
    bool swtch;
    double aa,bb;
    cin>>t;

    while(t--){
        cin>>n;
        vector<double> g(n),a(n),b(n);
        vector<double,int> ga(n),gb(n);
        aa=bb=0;
        forn(i,0,n)
            cin>>g[i]>>a[i]>>b[i],ga[i]={g[i]/a[i],i},gb[i]={g[i]/b[i],i};
        sort(ga.rbegin(),ga.rend());
        sort(gb.rbegin(),gb.rend());
        int i=0,j=0;
        double ta=0,tb=0;
        while(i<n || j<n){
            while(ta<tb && i<n){
                aa+=g[ga[i].second],ta+=a[ga[i].second],i++;
            }
            if(j<n && ga[i-1].second==gb[j].second){}
        }
    }
    return 0;
}