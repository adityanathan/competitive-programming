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

int gcd(int a, int b){
	return b?gcd(b,a%b):a;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string a,b,x,y;
    cin>>t;

    while(t--){
        cin>>a>>b;
        x=a, y=b;
        forn(i,1,a.length()+1){
        	if(a.length()%i)
        		continue;
        	int j=0;
        	while(j<a.length() && a.substr(0,i)==a.substr(j,i))
        		j+=i;
        	if(j>=a.length()){
        		x=a.substr(0,i);break;
        	}
        }
        forn(i,1,b.length()+1){
        	if(b.length()%i)
        		continue;
        	int j=0;
        	while(j<b.length()&&b.substr(0,i)==b.substr(j,i))
        		j+=i;
        	if(j>=b.length()){
        		y=b.substr(0,i);break;
        	}
        }
        if(x==y){
        	int i=0;
        	while(i<a.length()*b.length()/gcd(a.length(),b.length())/x.length())
        		cout<<x, i++;cout<<'\n';
        }
        else
        	cout<<"-1"<<'\n';
    }
    return 0;
}