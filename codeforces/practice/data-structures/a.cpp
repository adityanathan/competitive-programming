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
    string s;
    int count=0;

    cin>>s;
    
    stack<char> st;

    forn(i,0,s.length()){
    	if(!st.empty() && st.top()==s[i]){
    		st.pop();
    		count++;
    	}
    	else st.push(s[i]);

    }

    cout<<(count%2?"Yes":"No")<<'\n';

    return 0;
}