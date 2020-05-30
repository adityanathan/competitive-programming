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

void addEdge(vector<int> v[], int x, int y){ 
    v[x].push_back(y); 
    v[y].push_back(x); 
} 

bool DFS(vector<int> v[], bool vis[], int x, int y, vector<int>& stack){ 
    if(stack.size()>100 || vis[x])
        return false;
    stack.push_back(x);
    debug(stack,x,y);
    if (x == y)
        return true;

    vis[x] = true; 
    int flag = 0; 
    if (!v[x].empty())
        for (int j = 0; j < v[x].size(); j++) 
            if (vis[v[x][j]] == false) { 
                bool bb=DFS(v, vis, v[x][j], y, stack); 
                if(bb)
                    return true;
                flag = 1; 
            }
    if (flag == 0)
        stack.pop_back();
    return false;
}

void DFSCall(int x,int y,vector<int> v[],int n,vector<int>& stack){
    bool vis[n + 1]; 
    memset(vis, false, sizeof(vis)); 
    DFS(v, vis, x, y, stack); 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t,x,y,q;
    cin>>t;

    while(t--){
        cin>>n>>q;
        vector<int> v[n+1], a(n);
        forn(i,0,n)
            cin>>a[i];
        forn(i,0,n-1){
            cin>>x>>y;
            addEdge(v,y,x);
        }
        while(q--){
            cin>>x>>y;
            vector<int> s;
            DFSCall(x, y, v, n, s);
            if(s.size()>100){
                cout<<"0\n";
            }
            else{
                debug(s);
                bool done=false;
                map<int,int> m;
                for(auto x:s)
                    m[a[x-1]]++;
                debug(m);
                int mini=100;
                forit(it,m)
                    if(it->second>1){
                        cout<<"0\n";
                        done=true;
                        break;
                    }
                    else{
                        it++;
                        if(it==m.end())
                            break;
                        debug(mini,it->first);
                        mini=min(mini,it->first-(--it)->first);
                    }
                if(!done){
                    DFSCall(y, x, v, n, s);
                    if(s.size()>100){
                        cout<<"0\n";
                    }
                    else{
                        debug(s);
                        map<int,int> m;
                        for(auto x:s)
                            m[a[x-1]]++;
                        debug(m);
                        forit(it,m)
                            if(it->second>1){
                                cout<<"0\n";
                                done=true;
                                break;
                            }
                            else{
                                it++;
                                if(it==m.end())
                                    break;
                                debug(mini,it->first);
                                mini=min(mini,it->first-(--it)->first);
                            }
                        cout<<mini<<"\n";
                    }
                }
            }
        }
    }
    return 0;
}