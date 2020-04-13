#include<bits/stdc++.h>
	using namespace std;
	#define forn(i, n) for(int i = 0; i < n; ++i)
	#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

	int main(){
		ios_base::sync_with_stdio(false); 
	    cin.tie(NULL);   
		int n,t,a,b;
		cin>>t;
	
		while(t--){
			cin>>n>>a>>b;
			forn(i,n)
				cout<<(char)('a'+i%b);
			cout<<"\n";
		}
		return 0;
	}
	
