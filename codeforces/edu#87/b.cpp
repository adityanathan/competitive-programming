#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,x,y,ans;
	string s;
	cin>>t;

	while(t--){
		cin>>s;
		n=s.length();
		vector<vector<int> > v(6);
		forn(i,n){
			v[s[i]-'1'].push_back(i);
			v[3+s[i]-'1'].push_back(-i);
		}
		if(v[0].size()==0 ||v[1].size()==0 || v[2].size()==0){
			cout<<0<<endl;
			continue;
		}
		ans = n;

		forn(i,v[0].size()){
			x=*lower_bound(v[1].begin(),v[1].end(),v[0][i]);
			// if(lower_bound(v[1].begin(),v[1].end(),v[0][i])==v[1].end()){
			// 	auto it = lower_bound(v[1].begin(),v[1].end(),v[0][i]);
			// 	x=*(--it);
			// }
			y=*lower_bound(v[2].begin(),v[2].end(),v[0][i]);
			// if(lower_bound(v[2].begin(),v[2].end(),v[0][i])==v[2].end()){
			// 	auto it = lower_bound(v[2].begin(),v[2].end(),v[0][i]);
			// 	x=*(--it);
			// }
			if(max(max(x,y),v[0][i])-min(min(x,y),v[0][i])+1<ans){
				// cout<<1<<" "<<v[0][i]<<" "<<x<<" "<<y<<"\n";
				ans = max(max(x,y),v[0][i])-min(min(x,y),v[0][i])+1;
			}
		}
		forn(i,v[1].size()){
			x=*lower_bound(v[0].begin(),v[0].end(),v[1][i]);
			// if(lower_bound(v[0].begin(),v[0].end(),v[1][i])==v[0].end()){
			// 	auto it = lower_bound(v[0].begin(),v[0].end(),v[1][i]);
			// 	x=*(--it);
			// }
			y=*lower_bound(v[2].begin(),v[2].end(),v[1][i]);
			// if(lower_bound(v[2].begin(),v[2].end(),v[1][i])==v[2].end()){
			// 	auto it = lower_bound(v[2].begin(),v[2].end(),v[1][i]);
			// 	x=*(--it);
			// }
			if(max(max(x,y),v[1][i])-min(min(x,y),v[1][i])+1<ans){
				// cout<<2<<" "<<x<<" "<<v[1][i]<<" "<<y<<"\n";
				ans = max(max(x,y),v[1][i])-min(min(x,y),v[1][i])+1;
			}
		}
		forn(i,v[2].size()){
			x=*lower_bound(v[1].begin(),v[1].end(),v[2][i]);
			// if(lower_bound(v[1].begin(),v[1].end(),v[2][i])==v[1].end()){
			// 	auto it = lower_bound(v[1].begin(),v[1].end(),v[2][i]);
			// 	x=*(--it);
			// }
			y=*lower_bound(v[0].begin(),v[0].end(),v[2][i]);
			// if(lower_bound(v[0].begin(),v[0].end(),v[2][i])==v[0].end()){
			// 	auto it = lower_bound(v[0].begin(),v[0].end(),v[2][i]);
			// 	x=*(--it);
			// }
			if(max(max(x,y),v[2][i])-min(min(x,y),v[2][i])+1<ans){
				// cout<<3<<" "<<y<<" "<<x<<" "<<v[2][i]<<"\n";
				ans = max(max(x,y),v[2][i])-min(min(x,y),v[2][i])+1;
			}
		}
		cout<<(ans<3?0:ans)<<"\n";
	}
	return 0;
}


