#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,mini=0,count=0;
	string s;

	cin>>s;
	n=s.length();
	vector<int> v(n+1,0);
	forn(i,n){
		if(s[i]=='(')
			v[i+1]=v[i]+1;
		else 
			v[i+1]=v[i]-1;
		mini=v[mini]>v[i+1]?i+1:mini;
	}
	if(v[0]==v[n])
		forn(i,n)
			if(v[i]==v[mini])
				count++;
	cout<<count<<endl;
	
	return 0;
}


