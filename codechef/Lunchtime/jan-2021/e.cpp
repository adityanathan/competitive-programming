#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t,x;
    cin>>t;

    while(t--){
        cin>>n>>x;
        bool b=0;
        for(int i=1;i<=sqrt(x);i++)
            if(x%i==0)
                if(i<=n&&x/i<=n)
                    b=1;
        cout<<(b?"Yes\n":"No\n");
    }
    return 0;
}