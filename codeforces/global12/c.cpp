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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<string> a(n);
        forn(i,0,n)
        	cin>>a[i];
        forn(i,0,n)
        	forn(j,0,n)
        		if(i<n-2&&j<n-2 && a[i][j]=='X' && a[i+1][j]=='X'&&a[i+2][j]=='X'&&a[i][j+1]=='X'&&a[i][j+2]=='X')
        			a[i][j]='O';

        		else if(i && i<n-1 && j<n-2 && a[i][j]=='X' && a[i+1][j]=='X'&&a[i-1][j]=='X'&&a[i][j+1]=='X'&&a[i][j+2]=='X')
        			a[i][j]='O';
        		else if(j && j<n-1 && i<n-2 && a[i][j]=='X' && a[i][j+1]=='X'&&a[i][j-1]=='X'&&a[i+1][j]=='X'&&a[i+2][j]=='X')
        			a[i][j]='O';

        		else if(i<n-2&&j>1 && a[i][j]=='X' && a[i+1][j]=='X'&&a[i+2][j]=='X'&&a[i][j-1]=='X'&&a[i][j-2]=='X')
        			a[i][j]='O';
        		else if(j && j<n-1 && i<n-1&&i && a[i][j]=='X' && a[i][j+1]=='X'&&a[i][j-1]=='X'&&a[i+1][j]=='X'&&a[i-1][j]=='X')
        			a[i][j]='O';
        		else if(j<n-2&&i>1 && a[i][j]=='X' && a[i-1][j]=='X'&&a[i-2][j]=='X'&&a[i][j+1]=='X'&&a[i][j+2]=='X')
        			a[i][j]='O';

        		else if(i && i<n-1 && j>1 && a[i][j]=='X' && a[i+1][j]=='X'&&a[i-1][j]=='X'&&a[i][j-1]=='X'&&a[i][j-2]=='X')
        			a[i][j]='O';
        		else if(j && j<n-1 && i>1 && a[i][j]=='X' && a[i][j+1]=='X'&&a[i][j-1]=='X'&&a[i-1][j]=='X'&&a[i-2][j]=='X')
        			a[i][j]='O';

        		else if(i>1&&j>1 && a[i][j]=='X' && (a[i-1][j]=='X'&&a[i-2][j]=='X'||a[i][j-1]=='X'&&a[i][j-2]=='X'))
        			a[i][j]='O';


        forn(i,0,n)
        	cout<<a[i]<<'\n';
    }
    return 0;
}