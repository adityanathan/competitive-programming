#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,k,aa;
	bool flag;
	cin>>t;//t=1;

	while(t--){
		cin>>n>>k;
		vector<vector<int> > a(k);
		vector<int> b(n);
		flag=true;
		forn(i,n){
			cin>>aa;
			a[i%k].push_back(aa);
		}
		forn(i,k)
			sort(a[i].begin(),a[i].end());

		b[0]=a[0][0];
		forn(i,n-1){
			b[i+1]=a[(i+1)%k][(i+1)/k];
			if(b[i+1]<b[i]){
				flag=false;
				break;
			}
		}
		if(flag)
			cout<<"yes"<<endl;
		else
			cout<<"no\n";
	}
	return 0;
}


