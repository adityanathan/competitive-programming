#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;


vector<vector<pair<int,int>>> ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        ans.clear();
        vector<string> a(n);
        forn(i,0,n)
        	cin>>a[i];
        forn(i,0,n-1)
        	forn(j,0,m-1){
        		if(a[i][j]=='1' && i<n-2 && j<m-2){
        			a[i][j]='0';
        			a[i+1][j]=a[i+1][j]=='1'?:'0':'1';
        			a[i][j+1]=a[i][j+1]=='1'?:'0':'1';
        			ans.push_back({{i,j},{i,j+1},{i+1,j}});
        		}
        		if(a[i][j]=='1' && i==n-2 && j<m-2){
        			a[i][j]='0';
        			if(a[i+1][j]=='1'&&a[i+1][j+1]=='1'){
	        			a[i+1][j]=a[i+1][j]=='1'?:'0':'1';
	        			a[i+1][j+1]=a[i][j+1]=='1'?:'0':'1';
	        			ans.push_back({{i,j},{i,j+1},{i+1,j}});
	        		}
        		}
        		if(a[i][j]=='1' && i<n-2 && j==m-2){
        			a[i][j]='0';
        			a[i+1][j]=a[i+1][j]=='1'?:'0':'1';
        			a[i][j+1]=a[i][j+1]=='1'?:'0':'1';
        			ans.push_back({{i,j},{i,j+1},{i+1,j}});
        		}
        	}

    	cout<<ans.size()<<'\n';
    	for(auto vi:ans){
    		for(auto xy:vi)
        		cout<<xy.first+1<<' '<<xy.second+1<<' ';
        	cout<<'\n';
    	}

    }
    return 0;
}