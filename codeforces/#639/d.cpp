#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,l,r,white;
	cin>>t;

	while(t--){
		cin>>n>>m;
		vector<string> s(n);
		vector<bool> col(m,false),row(n,false);
		forn(i,n)
			cin>>s[i];

		forn(i,n){
			l=-1,r=1001,white=-1;
			forn(j,m){
				if(s[i][j]=='#'){
					if(l==-1)
						l=j;
					r=j;
				}
				else{
					col[j]=true;row[i]=true;
					if(l!=-1 && white==-1)
						white = j;
				}
			}
			if(white!=-1 && white<r)
				f=false;
		}

		forn(i,m){
			l=-1,r=1001,white=-1;
			forn(j,n){
				if(s[j][i]=='#'){
					if(l==-1)
						l=j;
					r=j;
				}
				else if(l!=-1 && white==-1)
					white = j;
			}
			if(white!=-1 && white<r)
				f=false;
		}

		forn(i,n)
			if(!col[i])
				f=false;

		forn(i,m)
			if(!row[i])
				f=false;

		if(f)
			cout<<"-1\n";
		
		cout<<n<<endl;
	}
	return 0;
}


