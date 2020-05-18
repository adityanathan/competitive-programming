#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(decltype(m)::iterator it = m.begin(); it!=m.end(); ++it)

int exact(int n){
	if(n==1)
		return 9;
	if(n==2)
		return 90;
	return 90*pow(2,n-2);
}

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,i=1,ans=0;

	cin>>n;
	while(pow(10,i)<=n)
		ans+=exact(i++);
	
	cout<<ans<<endl;
	
	return 0;
}


