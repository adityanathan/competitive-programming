#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        cout<<((int)sqrt(2*n-0.5)-1)/2<<'\n';
    }
    return 0;
}