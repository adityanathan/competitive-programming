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
    int n,maxa;

    {
        cin>>n;
        vector<int> a(n);
        map<int,vector<int>> m;
        forn(i,0,n){
        	cin>>a[i];
        	m[a[i]].push_back(i);
        }
        maxa=a[0];
        forit(it,m)
        	if(it->second.size()>m[maxa].size())
                maxa=it->first;
        vector<int> v=m[maxa];
        cout<<n-m[maxa].size()<<'\n';
        for(auto i:v){
            while(i>0){
                if(a[i-1]==maxa)
                    break;
                if(a[i-1]>maxa)
                    cout<<2<<" "<<i<<" "<<i+1<<'\n';
                else
                    cout<<1<<" "<<i<<" "<<i+1<<'\n';
                a[i-1]=maxa;
                i--;
            }
        }
        int i = v.back();
        while(i<n-1){
            if(a[i+1]==maxa)
                    break;
            if(a[i+1]>maxa)
                cout<<2<<" "<<i+2<<" "<<1+i<<'\n';
            else
                cout<<1<<" "<<i+2<<" "<<i+1<<'\n';
            a[i+1]=maxa;
            i++;
        }

    }
    return 0;
}