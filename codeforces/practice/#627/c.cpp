#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t,count,ans,i;
    string s;
    cin>>t;

    while(t--){
        cin>>s;
        n=s.length();
        ans=1;
        i=n-1;
        while(i>=0){
        	count=1;
        	while(i>=0 && s[n-1-i]=='L')
        		i--,count++;
        	while(i>=0 && s[n-1-i]=='R')
        		i--;
        	ans=max(count,ans);
        }
        cout<<ans<<'\n';
    }
    return 0;
}