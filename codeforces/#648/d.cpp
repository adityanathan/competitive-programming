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

vector<vector<int>> reach;
vector<string> a;

int n,m;

bool f(int i, int j){
	if(i==n-1 && j==m-1)
		return reach[i][j];
	if(reach[i][j]==-1){
		if(i==n-1)
			reach[i][j]=f(i,j+1) && (a[i][j+1]!='#');
		else if(j==m-1)
			reach[i][j]=f(i+1,j) && (a[i+1][j]!='#');
		else
			reach[i][j]=(f(i,j+1) && (a[i][j+1]!='#')) || (f(i+1,j) && (a[i+1][j]!='#'));
	}
	return reach[i][j];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        bool flag=true;
        vector<vector<int>> aa(n,vector<int> (m,-1));
        aa[n-1][m-1]=1;
        reach=aa;
        vector<string> aaa(n);
        a=aaa;

        forn(i,0,n)
        	cin>>a[i];

        forn(i,0,n){
        	forn(j,0,m){
        		if(a[i][j]=='G' && !f(i,j))
        			flag=false;
        		else if(a[i][j]=='B' && f(i,j)){
        			if(i==n-1){
        				if(a[i][j+1]=='G')
        					flag=false;
        				else if(a[i][j+1]=='.' && f(i,j+1)){
        					a[i][j+1]='#';
        					reach=aa;
        				}
        			}
        			else if(j==m-1){
        				if(a[i+1][j]=='G')
        					flag=false;
        				else if(a[i+1][j]=='.' && f(i+1,j)){
        					a[i+1][j]='#';
        					reach=aa;
        				}
        			}
        			else{
        				if(a[i][j+1]=='G')
        					flag=false;
        				else if(a[i][j+1]=='.' && f(i,j+1)){
        					a[i][j+1]='#';
        					reach=aa;
        				}
        				if(a[i+1][j]=='G')
        					flag=false;
        				else if(a[i+1][j]=='.' && f(i+1,j)){
        					a[i+1][j]='#';
        					reach=aa;
        				}
        			}
        		}
        		if(!flag)
        			break;
        	}
        	if(!flag)
        		break;
        }

        forn(i,0,n)
        	forn(j,0,m)
        		if(a[i][j]=='G' && !f(i,j))
        			flag=false;
        		else if(a[i][j]=='B' && f(i,j))
        			flag=false;

        cout<<(flag?"Yes":"No")<<'\n';
    }
    return 0;
}