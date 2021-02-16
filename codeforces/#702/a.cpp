#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        int ans=0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        	cin>>a[i];
       	for(int i=0;i<n-1;i++){
       		int aa=max(a[i],a[i+1]), b=min(a[i],a[i+1]);
       		while(aa>2*b)
       			ans++, b*=2;
       }
        cout<<ans<<'\n';
    }
    return 0;
}