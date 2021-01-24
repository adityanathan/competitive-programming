#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l,r,t;
    cin>>t;

    while(t--){
        cin>>l>>r;
        cout<<2*(r-l)+1<<'\n';
    }
    return 0;
}