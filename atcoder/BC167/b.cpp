#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long a,b,c,k;

	{
		cin>>a>>b>>c>>k;
		if(k<a)
			cout<<k;
		else if(k<a+b)
			cout<<a;
		else
			cout<<a-(k-a-b);
		cout<<endl;
	}
	return 0;
}
