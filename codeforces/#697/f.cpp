#include <bits/stdc++.h>
using namespace std;
#define forn(i,m,n) for(int i = m; i < n; i++)
int main(){
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<string> a(n), b(n);
        forn(i,0,n)
            cin>>a[i];
        forn(i,0,n)
            cin>>b[i];
        string ans="YES\n";
        forn(i,0,n-1)
            forn(j,0,n-1){
                if(((a[i][j]=='1')+(a[i+1][j]=='1')+(a[i][j+1]=='1')+(a[i+1][j+1]=='1'))%2!=
                    ((b[i][j]=='1')+(b[i+1][j]=='1')+(b[i][j+1]=='1')+(b[i+1][j+1]=='1'))%2)
                    ans="NO\n";
            }
        cout<<ans;
    }
    return 0;
}