#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long n,t,ans,k,peaks,maxpeaks;
	cin>>t;

	while(t--){
		cin>>n>>k;
		vector<int> a(n),b(n,0);
		forn(i,n){
			cin>>a[i];
		}
		forn(i,n){
			if(i!=0 && i!=n-1 && a[i]>a[i+1] && a[i]>a[i-1])
				b[i]=1;
		
		}
		peaks=0;
		maxpeaks=0;
		ans=0;
		forn(l,n-k+1){
			if(l==0){
				for(int i=1;i<=k-2;i++)
					peaks+=b[i];
				maxpeaks=peaks;
			}
			else{
				peaks+=b[l+k-2]-b[l];
				if(maxpeaks<peaks){
					maxpeaks=peaks;
					ans=l;
				}
			}
		}
		
		cout<<maxpeaks+1<<" "<<ans+1<<endl;
	}
	return 0;
}
