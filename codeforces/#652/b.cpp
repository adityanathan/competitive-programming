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

int nn,t;
string ss;

string f(string s){
	int n = s.length();
	string ans="",x;
	int count1,count0,i=n-1;
    while(i>=0){
    	count1=count0=0;
    	x="";
    	while(s[i]=='0' && i>=0)
    		x+=s[i],i--;

    	if(i<0){
    		ans+=x;
    		break;
    	}
    	while(s[i]=='1' && i>=0){
    		count0++,i--;
    	}
    	if(!x.size()){
    		string xx(count0,'1');
    		ans+=xx;
    	}
    	else{
    		if(i<n-1){
    			i++;
    			s[i]='0';
    		}
    	}
    }
    reverse(ans.begin(),ans.end());
    if(ans==s)
    	return s;
    return f(ans);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string an;
    cin>>t;

    while(t--){
        cin>>nn>>ss;
        an=f(ss);
        cout<<an<<'\n';
    }
    return 0;
}