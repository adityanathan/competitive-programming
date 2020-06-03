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
    int n,b,left,right;

    while(cin>>n>>b,n||b){
        set<int> s;
        forn(i,0,n)
            s.insert(i+1);

        while(b--){
            cin>>left>>right;
            auto x=s.find(left);
            if(x==s.begin())
                cout<<"* ";
            else{
                cout<<*(--x)<<" ";
                x++;
            }
            auto y=s.find(right);
            y++;
            if(y==s.end())
                cout<<"*\n";
            else
                cout<<*y<<"\n";
            s.erase(x,y);
        }
        cout<<"-\n";
    }
    return 0;
}