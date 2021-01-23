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
    int n;

    cin>>n;
    vector<int> a(n);
    forn(i,0,n)
    	cin>>a[i];
    stack<int> s; 
  
    ll ans=0,curr,area_with_top,i=0;

    while(i<n || !s.empty())
        if(s.empty() || i<n && a[s.top()] <= a[i]) 
            s.push(i++);
        else{ 
            curr = s.top();
            s.pop();
            area_with_top = a[curr]*(s.empty()?i:i-s.top()-1); 
            if(ans < area_with_top) 
                ans = area_with_top; 
        } 
    
    cout<<ans<<'\n';
    
    return 0;
}