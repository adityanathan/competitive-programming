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

int cnt(vector<int>& arr) {
    int inv = 0, n=arr.size(); 
    for (int i = 0; i < n - 1; i++) 
        for (int j = i + 1; j < n; j++) 
            inv+=arr[i] > arr[j];
    return inv; 
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n);
        forn(i,0,n)
            cin>>a[i];
        bool bb=false;
        forn(i,0,1<<n){
            vector<int> b,c;
            forn(j,0,n)
                if(i&(1<<j))
                    b.push_back(a[j]);
                else
                    c.push_back(a[j]);
            if(cnt(b)==cnt(c)){
                bb=true;
                break;
            }
        }
        cout<<(bb?"YES\n":"NO\n");
    }
    return 0;
}