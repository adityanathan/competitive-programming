#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)
int main(){
	int n,t,q,b,c;
	deque <int> d;
	cin>>n>>q;
	int a[n];
	t=n;
	while(t--){
		cin>>a[n-1-t];
		d.push_back(a[n-1-t]);
	}

	int maxkey=0;
	forn(i,n){
		if(a[i]>a[maxkey])
			maxkey=i;
	}

	vector< pair<int,int> > v;
	v.push_back(make_pair(69,69));

	forn(i,maxkey){
		b=d.front();
		d.pop_front();
		v.push_back(make_pair(b,d.front()));
		if (d.front()>b)
			d.push_back(b);
		else {
			d.push_back(d.front());
			d.pop_front();
			d.push_front(b);
		}
	}

	long long int query;
	while(q--){
		cin>>query;
		if (query<=maxkey)
			cout<<v.at(query).first<<" "<<v.at(query).second<<"\n";
		else cout<<a[maxkey]<<" "<<d.at((query-maxkey-1)%(n-1) +1)<<"\n";
	}
	
	return 0;
}