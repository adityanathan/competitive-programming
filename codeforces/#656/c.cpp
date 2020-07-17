#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
        	cin>>a[i];
        }
        int i=n-1;
        while(i>0 && a[i-1]>=a[i])
        	i--;

        while(i>0 && a[i-1]<=a[i])
        	i--;

        cout<<i<<'\n';
    }
    return 0;
}