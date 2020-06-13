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
    bool state;

    while(cin>>s){
        string last="",front="";
        vector<string> out;
        state=true;
        forn(i,0,s.length()){
            if(s[i]==']'||s[i]=='['){
                out.push_back(front);
                front="";
                state=s[i]==']';
            }
            else if(state)
                last+=s[i];
            else
                front+=s[i];
        }
        reverse(out.begin(),out.end());
        cout<<front;
        for(auto front:  out)
            cout<<front;
        cout<<last<<'\n';
    }
    return 0;
}