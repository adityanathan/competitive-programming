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
    string s;

    cin>>n>>s;
    vector<char> st;
    int ans=0;
    forn(i,0,n){
    	if(s[i]=='x' && st.size()>=2 && st[st.size()-1]=='o' && st[st.size()-2]=='f')
    		st.pop_back(), st.pop_back(), ans++;
    	else
    		st.push_back(s[i]);
    }
    cout<<n-3*ans<<'\n';
    
    return 0;
}