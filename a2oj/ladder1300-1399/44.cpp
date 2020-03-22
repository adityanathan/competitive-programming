#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	int n,b,c;
	cin>>n;
	vector<pair<int,int> > a(n,make_pair(0,0));
	forn(i,n){
		cin>>b>>c;
		a[i]=make_pair(b,c);
	}
	sort(a.begin(),a.end());
	forn(i,n-1){
		if(a[i].second>a[i+1].second && a[i].first<a[i+1].first){
			cout<<"Happy Alex";
			return 0;
		}
	}
	cout<<"Poor Alex";
	return 0;
}