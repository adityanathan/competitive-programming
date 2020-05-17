#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

double pi=3.14159265358;

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t;
	cin>>t;

	while(t--){
		cin>>n;
		{
			cout<<setprecision(10)<<(double)1/tan(pi/2/n)<<"\n";
		}
	}
	return 0;
}


