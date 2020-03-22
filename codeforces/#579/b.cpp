#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int q,n,a;
	cin>>q;
	while(q--){
		cin>>n;
		int j;
		bool   flag=true;
		map<int,int> m;
		forn(i,4*n){
			cin>>a;
			m[a]++;
		}
		vector<int> v;
		for(auto it=m.begin();it!=m.end();it++){
			if(it->second%2){
				cout<<"NO\n";
				flag=false;
				break;
			}
			forn(d,it->second/2)
			v.push_back(it->first);
		}
		if (flag==false)
			continue;
		sort(v.begin(),v.end());
		int prod=v[0]*v[2*n-1];
		forn(i,n){
			if(v[i]*v[2*n-i-1]!=prod){
				cout<<"NO\n";
				flag=false;
				break;
			}
		}
		if(flag)
		cout<<"YES\n";
	}
return 0;
}