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
        int count=0;
        forn(i,0,n)
        	if(s[i]=='0')
        		count++;
        	else
        		count+=3;
        if(count%4==0)
        	cout<<"E\n";
        else if(count%4==1)
        	cout<<"S\n";
        else if(count%4==2)
        	cout<<"W\n";
        else
        	cout<<"N\n";
    }
    return 0;
}