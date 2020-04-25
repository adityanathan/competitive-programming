#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

vector<int> a;

bool check(int r){
	int mini=0,newr;
	forn(i,r)
		mini=a[mini]>a[i]?i:mini;
	newr=mini;
	if(r<=1)
		return true;
	mini++;
	while(mini<r){
		if(a[mini]!=a[mini-1]+1)
			return false;
		mini++;
	}
	return check(newr);
	
}
int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,id;
	cin>>t;

	while(t--){
		cin>>n;
		vector<int> b(n);
		forn(i,n){
			cin>>b[i];
		}
		a=b;
		if (check(n))
			cout<<"Yes\n";
		else
			cout<<"No"<<endl;
	}
	return 0;
}


