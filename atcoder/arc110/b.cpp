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

ll f(string s){
	int n=s.length();
	if(n==1){
    	return (s=="0"?10000000000ll:20000000000ll);
    }
    else if(n==2){
    	if(s=="11"||s=="10")
    		return 10000000000ll;
    	else if(s=="01")
    		return 10000000000ll-1;
    }
    else if(n==3){
    	if(s=="110")
    		return 10000000000ll;
    	else if(s=="101"||s=="011")
    		return 10000000000ll-1;
    }
    else if(n==4){
    	if(s=="1011")
    		return 10000000000ll-1;
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    string s;
    bool b=1;

    cin>>n>>s;
    
    forn(i,0,n-2)
    	if(s[i]!='1'||s[i+1]!='1'||s[i+2]!='0')
	    	if(s[i]!='1'||s[i+1]!='0'||s[i+2]!='1')
    			if(s[i]!='0'||s[i+1]!='1'||s[i+2]!='1')
    				b=false;
    if(n<4||s=="1011"){
    	cout<<f(s);
    	return 0;
    }
    if(b){
    	string a="",b="";
    	int x=0;
    	bool bb=false;
    	forn(i,0,n)
    		if(i<n-2&&s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0')
    			x++,i+=2,bb=true;
    		else if(!bb)
    			a+=s[i];
    		else b+=s[i];
    	debug(a,x,b);
    	cout<<10000000000ll-x-(a.length()>0)-(b.length()>0)+1;
    }
    else
    	cout<<0;
    
    return 0;
}