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
    int x,y;

    {
        cin>>x>>y;
        if(y>=2*x && y%2==0 && x-(y-2*x)/2>=0)
        	cout<<"Yes";
        else cout<<"No";
    }
    return 0;
}