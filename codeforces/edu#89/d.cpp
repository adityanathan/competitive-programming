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
	return b==0?a:gcd(b,a%b);
}

map<int,pair<int,int>> m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,aa,d1;
    cin>>n;
    vector<pair<int,int>> b(n,make_pair(0,0));
    forn(i,0,n){
    	cin>>a;
    	aa=a;
    	if(m.find(a)!=m.end()){
    		b[i]=m[a];
    		continue;
    	}
    	d1=0;
    	if(a%2==0){
    		d1=2;
    		while(a%2 == 0)
        		a>>=1;
		   	if(gcd(2,a)==1 && a!=1){
		   		b[i]=make_pair(2,a);
		   		m[aa]=b[i];
		   		continue;
		   	}
	    }
		for(int j = 3; j <= sqrt(a); j = j+2)
			if(a%j==0){
	      		while (a%j == 0)
	        		a/=j;
	        	if(gcd(j,a)==1 && a!=1){
	   				b[i]=make_pair(j,a);
	   				break;
	        	}
	        	if(gcd(d1,j)==1){
	   				b[i]=make_pair(d1,j);
	   				break;
	        	}
	      	}
	   	if(b[i].first==0)
	   		b[i]=make_pair(-1,-1);
	   	m[aa]=b[i];
    }
    forn(i,0,n)
    	cout<<b[i].first<<" ";
    cout<<'\n';
    forn(i,0,n)
    	cout<<b[i].second<<" ";

    return 0;
}