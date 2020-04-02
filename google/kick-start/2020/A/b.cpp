#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

vector<vector<int> > suma,mapp;
int k;

int f(int n,int p){
	if(p==0 || n==0)
		return 0;

	int x=f(n-1,p);
	forn(i,min(p,k)){
		if(mapp[n-1][p-i-1]==0)
			mapp[n-1][p-i-1]=f(n-1,p-i-1);
		x=max(x,suma[n-1][i]+mapp[n-1][p-i-1]);
	}
	return x;
}

int main(){
	int t,test,n,p;
	cin>>test;
	t=test;
	while(t--){
		cin>>n>>k>>p;
		vector<vector<int> > a(n,vector<int> (k)),sumg(n,vector<int> (k)),mp(n,vector<int> (p,0));
		forn(i,n)
			forn(j,k){
				cin>>a[i][j];
				if(j!=0)
					sumg[i][j]=sumg[i][j-1]+a[i][j];
				else 
					sumg[i][j]=a[i][j];
			}
		suma=sumg;
		mapp=mp;
		cout<<"Case #"<<test-t<<": "<<f(n,p)<<"\n"; 
	}
	return 0;
}