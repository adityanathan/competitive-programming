#include <bits/stdc++.h>
using namespace std;

#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    string x1,x2;
    cin>>t;

    forn(test,1,t+1){
        cin>>n>>x1>>x2;
        vector<string> a(n,string(n,'N'));
        forn(i,0,n){
        	a[i][i]='Y';
        	if(i)
        		a[i][i-1]=a[i-1][i]='Y';
        	if(i<n-1)
        		a[i+1][i]=a[i][i+1]='Y';
        }

    	forn(i,0,n)
        	if(x1[i]=='N'){
        		if(i)
        			a[i-1][i]='N';
        		if(i<n-1)
        			a[i+1][i]='N';
        	}
        forn(i,0,n)
        	if(x2[i]=='N'){
        		if(i)
        			a[i][i-1]='N';
        		if(i<n-1)
        			a[i][i+1]='N';
        	}
        cout<<"Case #"<<test<<": \n";
        forn(i,0,n)
        	cout<<a[i]<<'\n';
    }
    return 0;
}