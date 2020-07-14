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

pair<int,int> solve(int a[], int n, int k){
    int zeros=0, left=0; 
    pair<int,int> range = {0,-1}; 
    forn(i,0,n){ 
        if(a[i] == 0) 
            zeros++; 
        while(zeros > k){ 
            if(a[left] == 0)
                zeros--; 
            left++; 
        }
        if(i-left > range.second-range.first)
        	range={left,i}; 
    } 
    return range; 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    
    cin>>n>>k;
    int a[n];
    forn(i,0,n)
    	cin>>a[i];
    pair<int,int> ans = solve(a,n,k);
    cout<<ans.second-ans.first+1<<'\n';
    forn(i,0,n)
    	if(i>=ans.first && i<=ans.second)
    		cout<<"1 ";
    	else
    		cout<<a[i]<<' ';
    
    return 0;
}