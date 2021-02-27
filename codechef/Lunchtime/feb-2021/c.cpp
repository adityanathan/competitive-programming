#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n);
        bool b=true;

        for(int i=0;i<n;i++){
        	cin>>a[i];
        	if(i&&a[i-1]<a[i])
        		b=false;
        }

        cout<<(!b?"Yes":"No")<<'\n';
    }
    return 0;
}