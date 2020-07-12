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
    int n,t,q,test,s,k,left,right,now;
    cin>>test;
	t=test;

    while(t--){
        cin>>n>>q;
        vector<int> a(n-1);
        forn(i,0,n-1)
            cin>>a[i];
        cout<<"Case #"<<test-t<<": ";
        while(q--){
            cin>>s>>k, s--;
            if(!s){
                cout<<k<<' ';
                continue;
            }
            if(s==n-1){
                cout<<n+1-k<<' ';
                continue;
            }
            left=s-1, right=now=s;
            while( --k && left!=-1 && right!=n-1){
                // debug(left,right,now);
                if(a[left]<a[right])
                    left--,now=left+1;
                else
                    right++,now=right;
            }
            if(!k){
                cout<<now+1<<' ';
                continue;
            }
            if(left==-1){
                cout<<right+k+1<<' ';
                continue;
            }
            if(right==n-1){
                cout<<left+2-k<<' ';
                continue;
            }
        }
        cout<<'\n';
    }
    return 0;
}