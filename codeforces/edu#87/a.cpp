#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long a,b,c,d,t;
	cin>>t;

	while(t--){
		cin>>a>>b>>c>>d;
		if(a>b && c<=d)
			cout<<-1<<endl;
		else if(a<=b)
			cout<<b<<"\n";
		else if((a-b)/(c-d)*(c-d)==a-b)
			cout<<b+c*(a-b)/(c-d)<<"\n";
		else
			cout<<b+c*(1+(a-b)/(c-d))<<"\n";
	}
	return 0;
}


