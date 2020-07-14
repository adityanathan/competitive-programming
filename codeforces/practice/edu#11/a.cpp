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

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,ans=0;
    string s;
    {
        cin>>n;
        vector<int> a(n);
        forn(i,0,n)
        	cin>>a[i];
        forn(i,0,n-1){
        	s+=to_string(a[i])+' ';
        	if(gcd(a[i],a[i+1])!=1)
        		ans++,s+="1 ";
        }
        	
        cout<<ans<<'\n'<<s<<a[n-1];
    }
    return 0;
}