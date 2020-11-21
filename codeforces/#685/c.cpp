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
    int n,k,t;
    string a,b;
    cin>>t;

    while(t--){
        cin>>n>>k>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        forn(i,0,n){
        	if(a[i]==b[i])
        		continue;
        	if(a[i]>b[i])
        		break;
        	int j=1;
        	while(j<k && i+j<n){
        		if(a[i+j]!=a[i+j-1])
        			break;
        		j++;
        	}
        	if(j==k){
        		int x=b[i]-a[i];
        		forn(j,0,k)
        			a[i+j]+=x;
        	}
        }
        cout<<(a==b?"Yes\n":"No\n");
    }
    return 0;
}