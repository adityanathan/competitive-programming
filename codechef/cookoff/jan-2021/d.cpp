#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        vector<string> a(n);
        vector<int> ans(2);
        for(int i=0;i<n;i++)
        	cin>>a[i];
        for(int i=0;i<n;i++)
        	for(int j=0;j<m;j++)
        		if((i+j)%2)
        			ans[0]+=a[i][j]=='.', ans[1]+=a[i][j]=='*';
        		else
        			ans[0]+=a[i][j]=='*', ans[1]+=a[i][j]=='.';
        
        cout<<(n%2&&m%2?ans[1]:min(ans[0],ans[1]))<<'\n';
    }
    return 0;
}