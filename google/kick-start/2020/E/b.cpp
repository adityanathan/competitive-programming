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
    int n,t,test,a,b,c;
    cin>>test;
	t=test;

    while(t--){
        cin>>n>>a>>b>>c;
        if(!a||!b||!c){
            cout<<"Case #"<<test-t<<": IMPOSSIBLE"<<'\n';
            continue;
        }
        vector<int> left,all(c+1,n);
        all[1]=-2;
        all.push_back(-1);
        a-=c;
        b-=c;
        int val=n-b-1;
        bool ok=false, ok2=false,ok3=false;
        if(a)
            ok=true;
        if(b)
            ok2=true;
        if(c>1)
            ok3=true;
        while(b--)
            all.push_back(n-1);

        val=a+1;
        while(a--)
            left.push_back(n-1);

        if(left.size()+all.size()-2>n){
            cout<<"Case #"<<test-t<<": IMPOSSIBLE"<<'\n';
            continue;
        }
        cout<<"Case #"<<test-t<<": ";
        if(!ok&&!ok2&&!ok3&&n-left.size()-all.size()+2>0){
            cout<<"IMPOSSIBLE\n";
            continue;
        }
        for(auto x:left)
            cout<<x<<' ';

        while(ok && n-left.size()-all.size()+2>0)
            cout<<1<<' ', n--;

        for(auto x:all)
            if(x==-1)
                while(ok2 && n-left.size()-all.size()+2>0)
                    cout<<1<<' ', n--;
            else if(x==-2)
                while(ok3 && n-left.size()-all.size()+2>0)
                    cout<<1<<' ', n--;
            else
                cout<<x<<' ';

        cout<<'\n';
    }
    return 0;
}