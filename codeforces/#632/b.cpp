#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,t,pos,neg;
	bool flag;
	cin>>t;

	while(t--){
		cin>>n;
		vector<long long> a(n),b(n);
		pos=n+1;
		neg=n+1;
		flag=true;
		forn(i,n){
			cin>>a[i];
			if(a[i]==1 && pos==n+1)
				pos=i;
			if(a[i]==-1 && neg==n+1)
				neg=i;
		}
		forn(i,n)
			cin>>b[i];
		forn(i,n){
			if(neg>=i && b[i]<a[i]){
				cout<<"NO\n";
				flag=false;
				break;
			}
			if(pos>=i && b[i]>a[i]){
				cout<<"NO\n";
				flag=false;
				break;
			}
		}
		if(flag)
			cout<<"YES\n";
	}
	return 0;
}
