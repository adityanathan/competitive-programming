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
    bool prime[100002]; 
    memset(prime, true, sizeof(prime)); 
  
    for(int p=2; p*p<=1e5; p++)
        if(prime[p]) 
        	for(int i=p*p; i<=1e5; i += p) 
                prime[i] = false; 

    while(t--){
        cin>>n;
        ll a,b,cnt=0, d=n;
        while(cnt<2){
        	if(prime[++n]&&!cnt)
        		a=n, cnt=1;
        	else if(prime[n]&&cnt==1 && n-a>=d)
        		b=n, cnt=2;
        }
        cout<<a*n<<'\n';
    }
    return 0;
}