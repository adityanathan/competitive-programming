#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,i,j,t,k;
	bool f;
	cin>>t;

	while(t--){
		cin>>n>>k;
		vector<int> a(n);
		unordered_map<int,int> m;
		vector<string> ans;
		forn(i,n){
			cin>>a[i];
			m[--a[i]]=i;
		}
		while(k>0 && !f){
			f=true;
			for(i=0;i<n;i++){
				if(a[i]==i)
					continue;
				if(a[a[i]]==i){
					for(j=i+1;j<n;j++)
						if(a[j]!=j && a[j]!=i && a[j]!=a[i])
							break;
					if(j==n){
						k=0;
						break;
					}
					ans.push_back(to_string(i+1)+" "+to_string(j+1)+" "+to_string(m[i]+1));
					k--;
					a[m[i]]=a[j];
					m[a[j]]=m[i];
					m[i]=i;
					m[a[i]]=a[i];
					a[j]=a[i];
					a[i]=i;
					continue;
				}
				ans.push_back(to_string(i+1)+" "+to_string(a[i]+1)+" "+to_string(m[i]+1));
				k--;
				
				a[m[i]]=a[a[i]];
				m[a[a[i]]]=m[i];
				m[i]=i;
				m[a[i]]=a[i];
				a[a[i]]=a[i];
				a[i]=i;
			}
			forn(i,n)
				if(a[i]!=i)
					f=false;
		}
		
		if(!f){
			cout<<"-1\n";
			continue;
		}
		cout<<ans.size()<<"\n";
		forn(i,ans.size())
			cout<<ans[i]<<endl;
	}
	return 0;
}


