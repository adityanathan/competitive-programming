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

unordered_map<int,int> pf(int n){  
    unordered_map<int,int> m; 
    while (n % 2 == 0)  
    {  
        m[2]++;  
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)
        while (n % i == 0)  
        {  
            m[i]++;  
            n = n/i;  
        }  
    if (n > 2)  
        m[n]++;
    return m;  
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,count=0;
    {
        cin>>n;
        vector<int> a(n);
        unordered_map<int,int> curr,m;
        forn(i,0,n)
        	cin>>a[i];
        sort(a.begin(),a.end());
        if(n>1 && a[0]==a[1])
        	count--;
        if(a[0]==1){
        	cout<<count+1;
        	return 0;
        }
        forn(i,0,n){
        	m=pf(a[i]);
        	bool b=true;
        	forit(it,m){
        		if(curr.find(it->first)!=curr.end() && curr[it->first]<=it->second){
        			b=false;
        			debug(it->first,a[i],curr);
        		}
        		if(curr.find(it->first)==curr.end() || curr[it->first]>it->second)
        			curr[it->first]=it->second;
        	}
        	count+=b;
        }
        cout<<count<<'\n';
    }
    return 0;
}