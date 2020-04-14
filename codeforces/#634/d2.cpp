#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	int n,t;
	string a;
	cin>>t;

	while(t--)
		forn(i,9){
			cin>>a;
			replace(a.begin(),a.end(),'2','1');
			cout<<a<<"\n";
		}

	return 0;
}

