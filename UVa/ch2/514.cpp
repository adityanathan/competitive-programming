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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;

    while(cin>>n,n){
        vector<int> perm(n);
        stack<int> s;
        
        while(true){
            cin>>perm[0];
            if(!perm[0])
                break;

            forn(i,1,n)
                cin>>perm[i];

            int j=1,k=0;
            while(j<=n && k<n){
                do{s.push(j++);
                }while(s.top()!=perm[k] && j<=n);
                while(!s.empty() && s.top()==perm[k] && k<n){
                    s.pop();
                    k++;
                }
            }
            cout<<(k==n?"Yes":"No")<<'\n';
        }
        cout<<'\n';
    }
    return 0;
}