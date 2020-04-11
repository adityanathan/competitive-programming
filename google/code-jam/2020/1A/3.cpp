#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef pair<int, int> pi;

int main(){
	int t,test,n;
	cin>>test;
	t=test;
	while(t--){
		cin>>n;
		vector<int> a(n);
		forn(i,n)
			cin>>a[i];
		

		cout<<"Case #"<<test-t<<": "<<"\n";
	    
	}
	return 0;
}