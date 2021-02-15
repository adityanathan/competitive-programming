#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,t;
    cin>>t;

    while(t--){
        cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++)
        	cin>>a, m[a]++;
        cout<<n-m.begin()->second<<'\n';
    }
    return 0;
}