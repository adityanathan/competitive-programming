#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)
        	for(int j=i+1;j<=n;j++)
        		cout<<(n%2||i%2==0||j!=i+1)*((i+j)%2?1:-1)<<' ';
        cout<<'\n';
    }
    return 0;
}