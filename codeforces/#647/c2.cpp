#include <bits/stdc++.h>
using namespace std;

int main(){
    long long ans,n,i,t;
    cin>>t;

    while(t--){
        cin>>n;
        ans=i=0;
        while(n){
            ans+=(n+1)/2*++i;
            n/=2;
        }
        cout<<ans<<'\n';
    }
    return 0;
}