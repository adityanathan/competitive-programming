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
    int id,val,k;
    string s;
    pair<ll,int> pp;
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    unordered_map<int,int> m;
    while(cin>>s,s!="#"){
        cin>>id>>val;
        m[id]=val;
        pq.push({val,id});
    }
    cin>>k;
    while(k--){
        pp = pq.top(), pq.pop();
        cout<<pp.second<<'\n';
        pq.push({pp.first+m[pp.second], pp.second});
    }
    
    return 0;
}