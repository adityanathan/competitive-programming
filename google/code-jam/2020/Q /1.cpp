#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
typedef pair<int, int> pi;

int main(){
	int t,n,trace,r,c,test;
	cin>>test;
	t=test;
	while(t--){
		cin>>n;
		trace=0;
		r=0;c=0;
		vector<vector<int> > a(n,vector<int>(n));
		forn(i,n)
			forn(j,n)
				cin>>a[i][j];
		
		forn(i,n)
			trace+=a[i][i];
		forn(i,n){
			vector<int> b(n,0);
			forn(j,n){
				b[a[i][j]-1]=1;
			}
			forn(j,n)
				if(b[j]!=1){
					r+=1;
					break;
				}
		}
		forn(j,n){
			vector<int> b(n,0);
			forn(i,n){
				b[a[i][j]-1]=1;
			}
			forn(j,n)
				if(b[j]!=1){
					c+=1;
					break;
				}
		}

		cout<<"Case #"<<test-t<<": "<<trace<<" "<<r<<" "<<c<<"\n";
	    
	}
	return 0;
}