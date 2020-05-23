#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long n,x=0,count=0;
	long long k;

	{
		cin>>n>>k;
		vector<int> a(n),b(n,-1);
		forn(i,n){
			cin>>a[i];
			a[i]--;
		}

		while(b[x]==-1){
			b[x]=count++;
			x=a[x];
		}

		count-=b[x];
		if(k>10000000)
			k=(k-b[x])%count+b[x];
		x=0;
		while(k--){
			x=a[x];
		}

		cout<<x+1<<endl;
	}
	return 0;
}


