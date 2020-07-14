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

ll conquer(int a[], int l, int mid, int h) { 

    ll sum = 0; 

    unordered_map<int,int> m,z;

    for(int i = mid; i >= l; i--)
        if(m.find(a[i])!=m.end()){
        	l=i+1;
        	break;
        }
        else
        	m[a[i]]=i;

    for(ll i = mid+1; i <= h; i++)
    	if(z.find(a[i])!=z.end())
        	break;
        else{
        	if(m.find(a[i])!=m.end())
        		l=max(l,m[a[i]]+1);
    		sum+=(i+1-l)*(i+2-l)/2-(i-mid)*(i-mid+1)/2;
    		if(l==mid+1)
    			break;
        	z[a[i]]=i;
        }
    return sum; 
} 

ll divide(int a[], int l, int h) { 
	if(l == h) 
    	return 1; 
  
   int m = (l+h)/2;
   return divide(a,l,m) + divide(a,m+1,h) + conquer(a,l,m,h); 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        int a[n];
        forn(i,0,n)
        	cin>>a[i];
        cout<<divide(a,0,n-1)<<'\n';
    }
    return 0;
}