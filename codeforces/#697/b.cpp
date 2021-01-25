#include <bits/stdc++.h>
using namespace std;
#define forn(i,m,n) for(int i = m; i < n; i++)
int main(){
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        cout<<(n/2020>=(n%2020)?"YES":"NO")<<'\n';
    }
    return 0;
}