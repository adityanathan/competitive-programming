#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,t,p,k,ans,count;

	cin>>t;

	while(t--){
		ans=0;
		cin>>n>>p>>k;
		int pp=p,cost=0;
		vector<int> a(n);
		forn(i,n){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		int j=0;
		forn(off,k){
			cost=count=j=0;
			while(cost<=p && (j)*k+off<=n-1){
				cost+=a[j*k+off];
				j+=1;
			}
			if(cost>p){
				j-=1;
				cost-=a[j*k+off];
				j-=1;
				count=j*k+off;
				while(a[count]+cost<=p && count<=n-1){
					count++;
				}
				if(a[count]+cost>p){
					// if(count-1>ans)
					// 	cout<<"yo1\n";
					ans=max(ans,count-1);
				}
				else {if(count>ans)
						cout<<"yo2\n";
						ans=max(ans,count);}
			}
			else if((j)*k+off>n-1){
				count=j*k+off;
				while(a[count]+cost<=p && count<=n-1){
					count++;
				}
				if(a[count]+cost>p){
					if(count-1>ans)
						cout<<"yo3\n";
					ans=max(ans,count-1);
				}
				else {if(count>ans)
						cout<<"yo4 "<<count<<" "<<cost<<"\n";
						ans=max(ans,count);}
			}
		}
		cout<<ans<<"\n";
	}


	return 0;
}