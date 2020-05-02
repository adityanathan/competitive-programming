#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,sum;
	cin>>t;

	while(t--){
		cin>>n;
		sum=pow(2,n);
		forn(i,(n/2-1)){
			sum+=pow(2,i+1);
		}
		for(int i = n/2; i < n; ++i){
			sum-=pow(2,i);
		
		}
		cout<<abs(sum)<<endl;
	}
	return 0;
}


