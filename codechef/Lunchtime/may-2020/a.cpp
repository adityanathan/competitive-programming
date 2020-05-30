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
    int n,t;
    string a,b;
    bool bb;
    cin>>t;

    while(t--){
        cin>>n>>a>>b;
        map<char,map<int,bool>> ma,mb;
        bb=true;
        forn(i,0,n){
            if(a[i]<b[i])
                bb=false;
            ma[a[i]][i]=mb[b[i]][i]=true;
        }
        forit(it,mb)
            if(ma.find(it->first)==ma.end())
                bb=false;

        vector<string> ans;
        for(auto it = mb.end(); it!=mb.begin(); ){
            it--;
            bool yes=true;
            map<int,bool> max=ma[it->first],mbx=it->second;
            forit(it,mbx)
                if(max.find(it->first)==max.end()){
                    max[it->first]=true;
                    yes=false;
                }
            if(yes)
                continue;
            ans.push_back(to_string(max.size())+" ");
            forit(it,max)
                ans[ans.size()-1]+=to_string(it->first)+" ";
        }
        if(!bb){
            cout<<"-1\n";
            continue;
        }
        cout<<ans.size()<<"\n";
        for(auto s:ans)
            cout<<s<<"\n";
    }
    return 0;
}