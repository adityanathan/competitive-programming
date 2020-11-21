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
    int n,t,orr,andd,xorr,ans;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n);
        cout<<"AND "<<1<<' '<<2<<endl;
        cin>>andd;
        cout<<"OR "<<1<<' '<<2<<endl;
        cin>>orr;
        cout<<"XOR "<<1<<' '<<2<<endl;
        cin>>xorr;
        forn(i,0,n-1){
        	cout<<"XOR "<<i+1<<' '<<i+2<<endl;
        	cin>>ans;
        }
        cout<<n<<'\n';
    }
    return 0;
}