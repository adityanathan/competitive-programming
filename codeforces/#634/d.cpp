#include<bits/stdc++.h>
	using namespace std;
	#define forn(i, n) for(int i = 0; i < n; ++i)
	#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

	int main(){
		ios_base::sync_with_stdio(false); 
	    	cin.tie(NULL);   
		int n,t;
		vector<string> a(9);
		cin>>t;
	
		while(t--){
			forn(i,9)
				cin>>a[i];
			if(a[0][0]=='1')
				a[0][0]='2';
			else a[0][0]='1';
			if(a[1][4]=='1')
				a[1][4]='2';
			else a[1][4]='1';
			if(a[2][8]=='1')
				a[2][8]='2';
			else a[2][8]='1';
			if(a[3][1]=='1')
				a[3][1]='2';
			else a[3][1]='1';
			if(a[4][3]=='1')
				a[4][3]='2';
			else a[4][3]='1';
			if(a[5][6]=='1')
				a[5][6]='2';
			else a[5][6]='1';
			if(a[6][2]=='1')
				a[6][2]='2';
			else a[6][2]='1';
			if(a[7][5]=='1')
				a[7][5]='2';
			else a[7][5]='1';
			if(a[8][7]=='1')
				a[8][7]='2';
			else a[8][7]='1';

			forn(i,9)
				cout<<a[i]<<"\n";
		}
		return 0;
	}
	
