#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long n,m,k,ans=1;
	cin>>k;
	for(long long m=1;m<k+1;m++){
		for(long long n=1;n<k+1;n++){
			if(abs(n*n-n*m-m*m)==1 && n+m>ans)
				ans=n+m;
		}
	}

	cout<<ans<<endl;
	
	return 0;
}


