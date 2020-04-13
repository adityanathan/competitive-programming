#include<bits/stdc++.h>
	using namespace std;
	#define forn(i, n) for(int i = 0; i < n; ++i)
	#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

	int main(){
		ios_base::sync_with_stdio(false); 
	    	cin.tie(NULL);   
		int n,t;
		cin>>t;
	
		while(t--){
			cin>>n;
			if(n>n/2+1)
				cout<<n-n/2-1<<"\n";
			else cout<<"0\n";
		}
		return 0;
	}
	
