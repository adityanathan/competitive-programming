#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
typedef pair<int, int> pi;

int main(){
	int t,n,b,cnt=0,tot,test;
	cin>>test;
	t=test;
	while(t--){
		cin>>n>>b;
		cnt=0;
		tot=0;
		vector<int> a(n);
		forn(i,n){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		forn(i,n){
			tot+=a[i];
			
			if(tot>b){
				break;
			}
			cnt+=1;
		}
		cout<<"Case #"<<test-t<<": "<<cnt<<"\n";
	    
	}
	return 0;
}