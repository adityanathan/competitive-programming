#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
	int cube=0,n,count=0;
	long long a,cb,sq;
	map<long long,int> m,mb;
	
	cin>>n;

	forn(i,n){
		cin>>a;
		cb=(long long) cbrt(a);
		sq=(long long) sqrt(a);
		if(cb*cb*cb==a)
			cube=1;
		else if(sq*sq==a)
			m[sq]++;
		else mb[a]++;
	}
	forit(it,mb)
		if(m.find(it->first)==m.end())
			count+=it->second;
		else
			count+=max(it->second,m[it->first]);

	forit(it,m)
		if(mb.find(it->first)==mb.end())
			count+=it->second;

	cout<<count+cube<<endl;
	
	return 0;
}