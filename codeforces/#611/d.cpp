#include<bits/stdc++.h>

using namespace std;

#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,m,count=00,res=0;

	cin>>n>>m;
	vector<int> a(n),b;
	map<int,bool> mp;
	mp.clear();
	forn(i,n){
		cin>>a[i];
		mp[a[i]]=false;
	}
	int x=1;
	sort(a.begin(),a.end());
	int maxa,mina;
	maxa=a[n-1];
	mina=a[0];
	while(count<m && (maxa-mina)>count){
		for(int i=0;i<n && count<m;i++){
			if(mp.find(a[i]+x)!=mp.end() && mp[a[i]+x]==false){
				// cout<<a[i]+x<<" "<<mp[a[i]+x]<<"\n";
				continue;
			}
			else{
				mp[a[i]+x]=false;
				b.push_back(a[i]+x);
				res+=abs(x);
				count++;
				maxa=max(maxa,a[i]+x);
				mina=min(mina,a[i]+x);
				// cout<<count<<"count";
			}
		}
		// cout<<x<<"->";
		if(x>0){
			x=-x;
		}
		else{
			x=-x+1;
		}
	}
	x=1;
	while(count<m){
		mp[maxa+x]=false;
		b.push_back(maxa+x);
		res+=abs(maxa+x-a[n-1]);
		count++;
		maxa+=x;
		if(count==m)
			break;

		mp[mina-x]=false;
		b.push_back(mina-x);
		res+=abs(mina-x-a[0]);
		count++;
		mina-=x;
	}

	cout<<res<<"\n";
	forn(i,m){
		cout<<b[i]<<" ";
	}

	return 0;
}