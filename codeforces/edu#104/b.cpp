#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k,t;
    cin>>t;

    while(t--){
        cin>>n>>k;

        cout<<(n%2?(k+n-1+(k-1)/(n/2))%n+1:(k+n-1)%n+1)<<'\n';
    }
    return 0;
}