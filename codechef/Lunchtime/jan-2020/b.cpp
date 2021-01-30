#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,t;
    cin>>t;
    while(t--){
        cin>>n;
        long long sum=0;
       	while(n--)
        	cin>>a, sum+=a;
        cout<<1+sum%2<<'\n';
    }
    return 0;
}