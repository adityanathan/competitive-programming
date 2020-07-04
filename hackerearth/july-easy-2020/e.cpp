#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(ll i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

vector<int> a;
int t,i,n;

bool isSubsetSum(int n, int sum) 
{ 
    bool subset[n + 1][sum + 1]; 
  
    for (int i = 0; i <= n; i++) 
        subset[i][0] = true; 
  
    for (int i = 1; i <= sum; i++) 
        subset[0][i] = false; 
  
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= sum; j++) { 
            if (j<a[i-1]) 
                subset[i][j] = subset[i-1][j]; 
            if (j>=a[i-1]) 
                subset[i][j] = subset[i-1][j] || subset[i-1][j-a[i-1]]; 
        } 
    } 
    return subset[n][sum]; 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;

    while(t--){
        cin>>n;
        a.assign(n,0);
        forn(i,0,n)
          cin>>a[i];
        
        for(i=0;i<n;i++)
          cout<<isSubsetSum(n,a[i])<<' ';
        cout<<'\n';
    }
    return 0;
}