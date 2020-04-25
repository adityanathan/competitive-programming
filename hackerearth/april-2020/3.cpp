#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m,ans=0;
	vector<int>::iterator it;
	
	cin>>n>>m;
	vector<int> a(n),b(m);

	forn(i,n)
		cin>>a[i];

	forn(i,m)
		cin>>b[i];

	sort(a.begin(),a.end());
	sort(b.rbegin(),b.rend());

	while(a.size()>0){
		ans++;
		forn(j,m){
			it = lower_bound(a.begin(), a.end(), b[j]); 
			cout<<*it<<" ";
			if(it==a.end()){
				cout<<"oops";
				break;
			}
			a.erase(--it);
			
		}
		cout<<ans<<"\n";
	}

	cout<<2*ans-1<<"\n";

}