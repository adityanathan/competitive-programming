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
    int t,b,sg,sb,aa;
    cin>>t;

    while(t--){
        cin>>b>>sg>>sb;
        priority_queue<int> pq1, pq2;
        while(sg--){
            cin>>aa;
            pq1.push(aa);
        }
        while(sb--){
            cin>>aa;
            pq2.push(aa);
        }
        while(pq1.size()>=b && pq2.size()>=b){
            vector<int> a,bb;
            forn(i,0,b){
                if(pq1.top()>pq2.top()){
                    a.push_back(pq1.top()-pq2.top());
                }
                if(pq1.top()<pq2.top()){
                    bb.push_back(pq2.top()-pq1.top());
                }
                pq1.pop(), pq2.pop();
            }
            for(auto x: a)
                pq1.push(x);
            for(auto x: bb)
                pq2.push(x);
        }
        while(pq1.size() && pq2.size()){
            vector<int> a,bb;

            while(min(pq1.size(),pq2.size())){
                if(pq1.top()>pq2.top()){
                    a.push_back(pq1.top()-pq2.top());
                }
                if(pq1.top()<pq2.top()){
                    bb.push_back(pq2.top()-pq1.top());
                }
                pq1.pop(), pq2.pop();
            }
            for(auto x:a)
                pq1.push(x);
            for(auto x:bb)
                pq2.push(x);
        }
        if(!pq1.size() && !pq2.size()){
            cout<<"green and blue died\n\n";
            continue;
        }
        if(pq1.size()){
            cout<<"green wins\n";
            while(pq1.size()){
                cout<<pq1.top()<<'\n';
                pq1.pop();
            }
        }
        if(pq2.size()){
            cout<<"blue wins\n";
            while(pq2.size()){
                cout<<pq2.top()<<'\n';
                pq2.pop();
            }
        }
        cout<<(t?"\n":"");
    }
    return 0;
}