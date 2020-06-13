#include <bits/stdc++.h>
using namespace std;
set<pair<int,int> > st;
bool del[100005];
int deg[100005],occ[100005];

vector<int> v[100005],s;
int sq,dep[100005];
bool marked[100005];
void dfs(int node)
{
    s.push_back(node);
    dep[node]=s.size();
    for (int u:v[node])
    {
        if (!dep[u])
        dfs(u);
        else if (dep[node]-dep[u]+1>=sq)
        {
            printf("2\n%d\n",dep[node]-dep[u]+1);
            for (int i=dep[u]-1;i<dep[node];i++)
            printf("%d ",s[i]);
            exit(0);
        }
    }
    if (!marked[node])
    {
        for (int u:v[node])
        marked[u]=1;
    }
    s.pop_back();
}

void remove(int node)
{
    if (del[node])
    return;
    st.erase({deg[node],node});
    del[node]=1;
    for (int u:v[node])
    {
        if (!del[u])
        {
            st.erase({deg[u],u});
            deg[u]--;
            st.insert({deg[u],u});
        }
    }
}
int main()
{
    int n,m;
    scanf("%d%d%d",&n,&m,&sq);
    while (m--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
        deg[a]++;
        deg[b]++;
    }
    for (int i=1;i<=n;i++)
        st.insert({deg[i],i});
    vector<int> ans;
    while (!st.empty())
    {
        auto p=*st.begin();
        st.erase(st.begin());
        if (p.first+1<=sq)
        {
            printf("2\n");
            vector<int> d({p.second});
            occ[p.second]=1;
            while (1)
            {
                pair<int,int> nex(1e9,0);
                for (int u:v[d.back()])
                {
                    if (!del[u])
                    nex=min(nex,make_pair(occ[u],u));
                }
                if (nex.first)
                {
                    printf("%d\n",(int)d.size()-nex.first+1);
                    for (int i=nex.first-1;i<d.size();i++)
                    printf("%d ",d[i]);
                    return 0;
                }
                d.push_back(nex.second);
                occ[nex.second]=d.size();
            }
        }
        ans.push_back(p.second);
        remove(p.second);
        for (int u:v[p.second])
        remove(u);
    }

//     sq=(sq+1)/2;
//     dfs(1);
//     printf("1\n");
    
//     for (int i=1;sq;i++)
//     {
//         if (!marked[i])
//         {
//             printf("%d ",i);
//             sq--;
//         }
//     }
// }
    printf("1\n");
    for (int i=0;i<(sq+1)/2;i++)
    printf("%d ",ans[i]);
}