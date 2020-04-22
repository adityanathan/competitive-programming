#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t,n,m;
	char c;
	
	cin>>t;
	
	while(t--){
		cin>>n>>m>>c;
		if(c=='L')
			cout<<((n<<m|n>>16-m)&65535)<<"\n";
		else
			cout<<((n<<16-m|n>>m)&65535)<<"\n";
	}

}