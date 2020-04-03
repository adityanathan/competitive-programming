#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
int main(){
	int t,x,n,v;

	cin>>t;

	while(t--){
		cin>>n>>x;
		vector<int> a(n);
		map<int,bool> m;
		forn(i,n){
			cin>>a[i];
			m[a[i]]=true;
		}
		v=0;
		for(auto it=m.begin();it!=m.end();it++){
			while(v<it->first-1 && x>0){
				v++;
				x--;
			}
			if(v==it->first-1)
				v=it->first;
		}
		v+=x;
		cout<<v<<"\n";
	}
	return 0;
}
