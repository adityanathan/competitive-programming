#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,k,i,ans,str,end,count,swit;
	string a;
	bool b;
	cin>>t;

	while(t--){
		cin>>n>>k>>a;
		str = end = -1;
		count=0;
		forn(i,n)
			if(a[i]=='1')
				count++;
		ans=count;
		forn(shift,k){
			for(i=shift;i<n;i+=k){
				if(a[i]=='1' && str==-1)
					str=i;
			}
			for(i-=k;i>=shift;i-=k){
				if(a[i]=='1' && end==-1)
					end=i;
			}
			if(str==-1)
				continue;
			// cout<<shift<<" "<<str<<" "<<end<<"\n";
			i=str;
			swit=0;
			while(i<=end){
				if(a[i]=='1')
					swit--;
				else
					swit++;
				i+=k;
			}
			ans=min(ans,count+swit);
		}
		cout<<ans<<endl;
	}
	return 0;
}