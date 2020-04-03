#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,t,k;
	cin>>t;
	map<int,int>::iterator last1,last2;

	while(t--){
		cin>>n;
		map<int,int> m1,m2;
		vector<int> a(n),l1,l2;
		forn(i,n){
			cin>>a[i];
			m2[a[i]]++;
		}
		k=0;
		forn(i,n){
			m1[a[i]]++;
			m2[a[i]]--;
			if(m2[a[i]]<=0)
				m2.erase(a[i]);
			if(m2.size()<=0)
				break;
			last1=m1.end();
			last1--;
			last2=m2.end();
			last2--;
			if(last1->first==i+1 && i+1==m1.size() && 
				last2->first==n-i-1 && n-i-1==m2.size()){
				k++;
				l1.push_back(i+1);
				l2.push_back(n-i-1);
			}
		}
		cout<<k<<"\n";
		forn(i,k)
			cout<<l1[i]<<" "<<l2[i]<<"\n";
	}
	return 0;
}
