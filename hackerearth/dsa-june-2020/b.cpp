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

int CeilIndex(std::vector<int>& v, int l, int r, int key) 
{ 
    while (r - l > 1) { 
        int m = l + (r - l) / 2; 
        if (v[m] >= key) 
            r = m; 
        else
            l = m; 
    } 
  
    return r; 
} 
  
int lds(std::vector<int>& v) 
{ 
    if (v.size() == 0) 
        return 0; 
  
    std::vector<int> tail(v.size(), 0); 
    int length = 1; // always points empty slot in tail 
  
    tail[0] = v[0]; 
    for (size_t i = 1; i < v.size(); i++) { 
        if (v[i] < tail[0]) 
            tail[0] = v[i]; 
        else if (v[i] > tail[length - 1]) 
            tail[length++] = v[i]; 
        else
            tail[CeilIndex(tail, -1, length - 1, v[i])] = v[i]; 
    } 
  
    return length; 
} 


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    {
        cin>>n;
        vector<int> arr(n);
        forn(i,0,n)
        	cin>>arr[n-1-i];

        cout<<lds(arr)<<'\n';
    }
    return 0;
}