#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long a,b,c,d,ans=0;

	cin>>a>>b>>c>>d;

	for(int z=c+1;z<=d+1;z++){
		if(z>c+b)
			continue;
		if(z>=c+a && b!=c)
			ans+=(c-z+b+1)*(c-z+b+2)/2;
		else if(z>=c+a)
			ans+=(c-z+b+1);
		else if(z>2*b)
			ans+=(c-z+a+1)*(c-z+a)+(b-a+1)*(b-a+2)/2;
		else if(z>=a+b && b!=c)
			ans+=(c-b+1)*(b-a+1)-(z-b-a)*(z-b-a+1)/2;
		else if(z>=a+b)
			ans=(b-a+1)-(z-b-a);
		else
			ans+=(c-b+1)*(b-a+1);
	}

	cout<<ans<<endl;

	return 0;
}


