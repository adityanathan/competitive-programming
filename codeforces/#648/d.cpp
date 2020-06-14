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
	if(reach[i][j]==-1){
        reach[i][j]=0;
		reach[i][j]=(j!=m-1 && f(i,j+1) && a[i][j+1]!='#') || (i!=n-1 && f(i+1,j) && a[i+1][j]!='#') ||
                    (j && f(i,j-1) && a[i][j-1]!='#') || (i && f(i-1,j) && a[i-1][j]!='#');
        if(reach[i][j]){
            if(j!=m-1 && !reach[i][j+1]){
                reach[i][j+1]=-1;
                f(i,j+1);
            }
            if(i!=n-1 && !reach[i+1][j]){
                reach[i+1][j]=-1;
                f(i+1,j);
            }
            if(j && !reach[i][j-1]){
                reach[i][j-1]=-1;
                f(i,j-1);
            }
            if(i && !reach[i-1][j]){
                reach[i-1][j]=-1;
                f(i-1,j);
            }
        }

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

        forn(i,0,n)
        	forn(j,0,m)
        		if(a[i][j]=='B' && f(i,j)){
        			if(i!=n-1 && a[i+1][j]=='.')
    					a[i+1][j]='#';
        			if(i && a[i-1][j]=='.')
                        a[i-1][j]='#';
                    if(j!=m-1 && a[i][j+1]=='.')
                        a[i][j+1]='#';
                    if(j && a[i][j-1]=='.')
                        a[i][j-1]='#';
    			}

        reach=aa;

        forn(i,0,n)
        	forn(j,0,m){
        		if(a[i][j]=='G' && !f(i,j))
        			flag=false;
        		else if(a[i][j]=='B' && f(i,j))
        			flag=false;
                // debug(i,j,reach);
            }

        // debug(reach,a);
        cout<<(flag?"Yes":"No")<<'\n';
    }
    return 0;
}