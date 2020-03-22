#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> a(n),b(n,0);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			b[a[i]-1]=i+1;
		}
		int mina=100000000,maxa=-1;
		for(int i=0;i<n;i++){
			mina=min(mina,b[i]);
			maxa=max(maxa,b[i]);
			if(maxa-mina==i)
				cout<<1;
			else cout<<0;
		}
		cout<<"\n";
	}
	return 0;
}