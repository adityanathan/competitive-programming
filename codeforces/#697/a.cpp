#include <bits/stdc++.h>
using namespace std;
#define forn(i,m,n) for(int i = m; i < n; i++)
int main(){
    long long n,t;
    cin>>t;

    while(t--){
        cin>>n;
        while(n%2==0)
        	n/=2;
        cout<<(n==1?"NO":"YES")<<'\n';
    }
    return 0;
}