#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)


int main(){
	int q,n,k,odd=0;
	cin>>q;
	while(q--){
		cin>>n>>k;
		vector<int> a(n,0);
		odd=0;
		forn(i,n){
			cin>>a[i];
			if(a[i]&1)
				odd++;
		}
		if(odd<k || (odd-k)&1)
		{
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		int i=0;
		while(i<n){
			if(k<=1) break;
			if(a[i]&1){
				cout<<i+1<<" ";
				k--;
			}i++;
		}
		if(k<=1 && i<n) cout<<n;
		cout<<"\n";
	}
	return 0;
}