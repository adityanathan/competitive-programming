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

void update(int Fenwick[], int n, int index, int val){ 
    index++; 
    while(index <= n) { 
        Fenwick[index] ^= val; 
        index += index & (-index); 
    } 
} 

int* construct(vector<int> &a, int n){ 
    int* Fenwick = new int[n + 1]; 
    for (int i = 1; i <= n; i++) 
        Fenwick[i] = 0; 
  
    for (int i = 0; i < n; i++) 
        update(Fenwick, n, i, a[i]); 
  
    return Fenwick; 
} 

int prefixXOR(int Fenwick[], int index){ 
    int ans = 0; 
    index++; 
    while(index){ 
        ans ^= Fenwick[index]; 
        index -= index & (-index); 
    } 
    return ans; 
} 

int query(int Fenwick[], int l, int r) { 
    return prefixXOR(Fenwick, r)^prefixXOR(Fenwick, l - 1); 
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q,t,x,y;

    cin>>n>>q;
    vector<int> a(n);
    forn(i,0,n)
    	cin>>a[i];
    int* Fenwick = construct(a, n);
    while(q--){
        cin>>t>>x>>y;
        if(t==2)
            cout<<query(Fenwick,x-1,y-1)<<'\n';
        else
            update(Fenwick,n,x-1,y); 
    }
    
    return 0;
}