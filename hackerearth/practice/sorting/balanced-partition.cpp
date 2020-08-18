#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,sum,total,x,y,h;
    bool b;
    cin>>t;

    while(t--){
        cin>>n;
        map<int,int> m;
        total=sum=b=0;
        
        while(n--){
            cin>>x>>y>>h;
            m[x-y]+=h;
            total+=h;
        }
        for(auto it:m){
            sum+=it.second;
            if(sum-it.second==total-sum || sum==total-sum){
                b=true;
                break;
            }
        }
        cout<<(b?"YES\n":"NO\n");
    }
    return 0;
}