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
    int n,k;
    string s1,s2;

    cin>>n>>k;
    while(k--){
    	s1=s2=to_string(n);
    	sort(s1.begin(),s1.end());
    	sort(s2.rbegin(),s2.rend());
    	n=stoi(s2)-stoi(s1);
    }
    cout<<n<<'\n';
    
    return 0;
}