#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,elem;
	long long sum;
	cin>>t;

	while(t--){
		cin>>n;
		vector<int> a(n);
		forn(i,n)
			cin>>a[i];
		sum=0;
		elem=a[0];
		int i=1;
		while(i<n){
			if(a[i]>0 == elem>0)
				elem=max(elem,a[i]);
			else{
				sum+=elem;
				elem=a[i];
			}
			i++;
		}
		sum+=elem;


		cout<<sum<<endl;
			
	}
	return 0;
}


