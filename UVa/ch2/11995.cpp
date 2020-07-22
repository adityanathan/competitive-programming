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
    int t,q,num;
    bool flag;
    while(cin>>t){
        stack<int> a;
        queue<int> b;
        priority_queue<int> c;
        vector<int> ans,ans1,ans2,ans3;
        flag=1;
        while(t--){
            cin>>q>>num;
            if(q==1){
                a.push(num);
                b.push(num);
                c.push(num);
            }
            else{
                ans.push_back(num);
                if(!a.size()){
                    flag=false;
                    continue;
                }
                ans1.push_back(a.top()),a.pop();
                ans2.push_back(b.front()),b.pop();
                ans3.push_back(c.top()),c.pop();
            }
        }
        switch(((ans==ans1)+(ans==ans2)+(ans==ans3))*flag){
            case 0:
                cout<<"impossible\n";
                break;
            case 1:
                if(ans==ans1)
                    cout<<"stack\n";
                else if(ans==ans2)
                    cout<<"queue\n";
                else
                    cout<<"priority queue\n";
                break;
            default:
                cout<<"not sure\n";
        }
    }
    
    return 0;
}