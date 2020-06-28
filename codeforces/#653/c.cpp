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
    string s;
    cin>>t;

    while(t--){
        cin>>n>>s;
        stack<char> st;
        forn(i,0,n){
        	if(s[i]=='(')
        		st.push('(');
        	else if(!st.empty() && st.top()=='(')
        		st.pop();
        	else
        		st.push(')');
        }
        cout<<st.size()/2<<'\n';
    }
    return 0;
}