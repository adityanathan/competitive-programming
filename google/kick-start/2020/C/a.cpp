#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	int t,n,test,k,kk,count;
	cin>>test;
	t=test;
	while(t--){
		cin>>n>>k;
		vector<int> a(n);
		map<int,int> m;
		forn(i,n){
			cin>>a[i];
			if(a[i]==1)
				m[i]++;
		}
		count=0;
		forit(it,m){
			int i = it->first;
			kk=k-1;
			while(i>0 && kk>0){
				if(a[i]+1!=a[i-1])
					kk=-1;
				else kk--;
				i--;
				// cout<<i<<  " "<<kk;
			}
			if(kk==0)
				count++;
		}

		cout<<"Case #"<<test-t<<": "<<count<<"\n";
	}
	return 0;
}