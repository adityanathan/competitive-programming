#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,t;
    cin>>t;

    while(t--){
        cin>>n;n/=3;
        int ans=0;
        vector<int> c(3);
        for(int i=0;i<3*n;i++)
        	cin>>a, c[a%3]++;

        if(c[0]>n&&c[1]<=n&&c[2]<=n)
        	ans+=n-c[1]+2*(n-c[2]);
        else if(c[1]>n&&c[0]<=n&&c[2]<=n)
        	ans+=n-c[2]+2*(n-c[0]);
        else if(c[2]>n&&c[1]<=n&&c[0]<=n)
        	ans+=n-c[0]+2*(n-c[1]);

        if(c[0]>n&&c[1]>n&&c[2]<=n)
        	ans-=n-c[1]+2*(n-c[0]);
        else if(c[0]>n&&c[2]>n&&c[1]<=n)
        	ans-=n-c[0]+2*(n-c[2]);
        else if(c[2]>n&&c[1]>n&&c[0]<=n)
        	ans-=n-c[2]+2*(n-c[1]);

        cout<<ans<<'\n';
    }
    return 0;
}