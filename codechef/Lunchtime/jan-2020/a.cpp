#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        int a,m=0;
        for(int i=0;i<n;i++)
        	cin>>a, m+=a%2;
        cout<<min(m,n-m)<<'\n';
    }
    return 0;
}