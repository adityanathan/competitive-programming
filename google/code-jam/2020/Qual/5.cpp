#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
typedef pair<int, int> pi;

int main(){
	int t,test,n,k;
	cin>>test;
	t=test;
	while(t--){
		cin>>n>>k;
		if(k%n!=0){
			cout<<"Case #"<<test-t<<": IMPOSSIBLE\n";
			continue;
		}
		vector<vector<int> > a(n,vector<int>(n));

		forn(i,n)
			for(int j=i;j<n+i;j++){
				a[i][j%n]=(j-i+k/n)%n!=0?(j-i+k/n)%n:n;
			}
		cout<<"Case #"<<test-t<<": POSSIBLE\n";
		forn(i,n){
			forn(j,n)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	}
	return 0;
}