#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(decltype(m)::iterator it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,ans=0;

	{
		cin>>n;
		vector<int> a(n),l,r;
		unordered_map<int,vector<int> > m;
		forn(i,n){
			cin>>a[i];
			m[a[i]].push_back(i);
		}

		forit(it,m){
			l=it->second;
			forit(jt,m){
				r=jt->second;
				int i=0,j=0,cnt=1;
				while(i<l.size() && j<r.size()){
					while(l[i]>=r[j] && j<r.size())
						j++;
					if(j<r.size())
						cnt++;
					else
						break;
					while(l[i]<=r[j] && i<l.size())
						i++;
					if(i<l.size())
						cnt++;					
				}
				ans=max(cnt,ans);
			}
		}

		cout<<ans<<endl;
	}
	return 0;
}


