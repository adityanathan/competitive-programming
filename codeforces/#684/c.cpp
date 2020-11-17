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
        for(int i=0;i<n;i+=2){
        	if(i==n-1)
        		i--;
        	for(int j=0;j<m-1;j+=2){
        		while((a[i][j]=='1')+(a[i+1][j]=='1')+(a[i][j+1]=='1')+(a[i+1][j+1]=='1'))
        			if((a[i][j]=='1')+(a[i+1][j]=='1')+(a[i][j+1]=='1')+(a[i+1][j+1]=='1')==3){
	        			if(a[i][j]=='0')
	        				ans.push_back({{i,j+1},{i+1,j},{i+1,j+1}});
	        			else if(a[i][j+1]=='0')
	        				ans.push_back({{i,j},{i+1,j},{i+1,j+1}});
	        			else if(a[i+1][j]=='0')
	        				ans.push_back({{i,j+1},{i,j},{i+1,j+1}});
	        			else
	        				ans.push_back({{i,j+1},{i+1,j},{i,j}});
	        			a[i][j]=a[i+1][j]=a[i][j+1]=a[i+1][j+1]='0';
	        		}
	        		else if((a[i][j]=='1')+(a[i+1][j]=='1')+(a[i][j+1]=='1')+(a[i+1][j+1]=='1')==2){
	        			if(a[i][j]=='1' && a[i][j+1]=='1'){
	        				ans.push_back({{i,j+1},{i+1,j},{i+1,j+1}});
	        				a[i][j+1]='0', a[i+1][j]=a[i+1][j+1]='1';
	        			}
	        			else if(a[i][j]=='1' && a[i+1][j]=='1'){
	        				ans.push_back({{i,j+1},{i+1,j},{i+1,j+1}});
	        				a[i+1][j]='0', a[i][j+1]=a[i+1][j+1]='1';
	        			}
	        			else if(a[i][j]=='1' && a[i+1][j+1]=='1'){
	        				ans.push_back({{i,j+1},{i+1,j},{i+1,j+1}});
	        				a[i+1][j+1]='0', a[i+1][j]=a[i][j+1]='1';
	        			}
	        			else if(a[i+1][j]=='1' && a[i][j+1]=='1'){
	        				ans.push_back({{i,j},{i,j+1},{i+1,j+1}});
	        				a[i][j+1]='0', a[i][j]=a[i+1][j+1]='1';
	        			}
	        			else if(a[i+1][j+1]=='1' && a[i][j+1]=='1'){
	        				ans.push_back({{i,j+1},{i+1,j},{i,j}});
	        				a[i][j+1]='0', a[i+1][j]=a[i][j]='1';
	        			}
	        			else{
	        				ans.push_back({{i,j+1},{i,j},{i+1,j+1}});
	        				a[i+1][j+1]='0', a[i][j]=a[i][j+1]='1';
	        			}
	        		}
	        		else if((a[i][j]=='1')+(a[i+1][j]=='1')+(a[i][j+1]=='1')+(a[i+1][j+1]=='1')==1){
	        			if(a[i][j]=='1')
	        				a[i][j]='0', a[i+1][j]=a[i+1][j+1]='1',
	        				ans.push_back({{i,j},{i+1,j},{i+1,j+1}});
	        			else if(a[i][j+1]=='1')
	        				a[i][j+1]='0', a[i+1][j]=a[i+1][j+1]='1',
	        				ans.push_back({{i,j+1},{i+1,j},{i+1,j+1}});
	        			else if(a[i+1][j]=='1')
	        				a[i+1][j]='0', a[i][j]=a[i+1][j+1]='1',
	        				ans.push_back({{i+1,j},{i,j},{i+1,j+1}});
	        			else
	        				a[i+1][j+1]='0', a[i+1][j]=a[i][j]='1',
	        				ans.push_back({{i+1,j+1},{i+1,j},{i,j}});
	        		}
	        		else{
	        			a[i][j]=a[i+1][j]=a[i][j+1]='0';
	        			ans.push_back({{i,j},{i+1,j},{i,j+1}});
	        		}
        	}
    	}
    	if(m%2){
    		int j=m-2;
    		for(int i=0;i<n;i+=2){
	        	if(i==n-1)
	        		i--;
	    		while((a[i][j]=='1')+(a[i+1][j]=='1')+(a[i][j+1]=='1')+(a[i+1][j+1]=='1'))
	    			if((a[i][j]=='1')+(a[i+1][j]=='1')+(a[i][j+1]=='1')+(a[i+1][j+1]=='1')==3){
	        			if(a[i][j]=='0')
	        				ans.push_back({{i,j+1},{i+1,j},{i+1,j+1}});
	        			else if(a[i][j+1]=='0')
	        				ans.push_back({{i,j},{i+1,j},{i+1,j+1}});
	        			else if(a[i+1][j]=='0')
	        				ans.push_back({{i,j+1},{i,j},{i+1,j+1}});
	        			else
	        				ans.push_back({{i,j+1},{i+1,j},{i,j}});
	        			a[i][j]=a[i+1][j]=a[i][j+1]=a[i+1][j+1]='0';
	        		}
	        		else if((a[i][j]=='1')+(a[i+1][j]=='1')+(a[i][j+1]=='1')+(a[i+1][j+1]=='1')==2){
	        			if(a[i][j]=='1' && a[i][j+1]=='1'){
	        				ans.push_back({{i,j+1},{i+1,j},{i+1,j+1}});
	        				a[i][j+1]='0', a[i+1][j]=a[i+1][j+1]='1';
	        			}
	        			else if(a[i][j]=='1' && a[i+1][j]=='1'){
	        				ans.push_back({{i,j+1},{i+1,j},{i+1,j+1}});
	        				a[i+1][j]='0', a[i][j+1]=a[i+1][j+1]='1';
	        			}
	        			else if(a[i][j]=='1' && a[i+1][j+1]=='1'){
	        				ans.push_back({{i,j+1},{i+1,j},{i+1,j+1}});
	        				a[i+1][j+1]='0', a[i+1][j]=a[i][j+1]='1';
	        			}
	        			else if(a[i+1][j]=='1' && a[i][j+1]=='1'){
	        				ans.push_back({{i,j},{i,j+1},{i+1,j+1}});
	        				a[i][j+1]='0', a[i][j]=a[i+1][j+1]='1';
	        			}
	        			else if(a[i+1][j+1]=='1' && a[i][j+1]=='1'){
	        				ans.push_back({{i,j+1},{i+1,j},{i,j}});
	        				a[i][j+1]='0', a[i+1][j]=a[i][j]='1';
	        			}
	        			else{
	        				ans.push_back({{i,j+1},{i,j},{i+1,j+1}});
	        				a[i+1][j+1]='0', a[i][j]=a[i][j+1]='1';
	        			}
	        		}
	        		else if((a[i][j]=='1')+(a[i+1][j]=='1')+(a[i][j+1]=='1')+(a[i+1][j+1]=='1')==1){
	        			if(a[i][j]=='1')
	        				a[i][j]='0', a[i+1][j]=a[i+1][j+1]='1',
	        				ans.push_back({{i,j},{i+1,j},{i+1,j+1}});
	        			else if(a[i][j+1]=='1')
	        				a[i][j+1]='0', a[i+1][j]=a[i+1][j+1]='1',
	        				ans.push_back({{i,j+1},{i+1,j},{i+1,j+1}});
	        			else if(a[i+1][j]=='1')
	        				a[i+1][j]='0', a[i][j]=a[i+1][j+1]='1',
	        				ans.push_back({{i+1,j},{i,j},{i+1,j+1}});
	        			else
	        				a[i+1][j+1]='0', a[i+1][j]=a[i][j]='1',
	        				ans.push_back({{i+1,j+1},{i+1,j},{i,j}});
	        		}
	        		else{
	        			a[i][j]=a[i+1][j]=a[i][j+1]='0';
	        			ans.push_back({{i,j},{i+1,j},{i,j+1}});
	        		}
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