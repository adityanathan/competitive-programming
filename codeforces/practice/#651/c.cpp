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
    cin>>t;

    while(t--){
        cin>>n;
        if(n%2)
        	cout<<(n-1?"Ashishgup\n":"FastestFinger\n");
        else
        	cout<<(n/(n&-n)-1 && (n&-n)-2 || n==2?"Ashishgup\n":"FastestFinger\n");
    }
    return 0;
}