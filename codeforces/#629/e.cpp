#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
int main(){
	long long n,k,t,x,y;
	int minz,count;

	cin>>t;

	while(t--){
		cin>>n;
		vector<int> a(n);
		map<int,int> col;
		map<int,map<int,bool> > v;
		forn(i,n)
			cin>>a[i];
		forn(i,n){
			col[a[i]]=a[i];
			if(v.find(a[i])==v.end()){
				map<int,bool> kg;
				v[a[i]]=kg;
			}
			if(a[i]!=a[(i+1)%n]){
				v[a[i]][a[(i+1)%n]]=true;
				v[a[(i+1)%n]][a[i]]=true;
			}
		}
		int minc=INT_MAX;
		forn(i,col.size())
		minc=min(minc,col[i]);
		for(auto it=v.begin();it!=v.end();it++){
			// cout<<"col"<<col.size()<<"i,vi"<<it->first<<(it->second).size();
			if((it->second).size()==col.size()-1){
				// cout<<"\n";
				continue;
			}
			if((it->second).size()>col.size()-1)
				cout<<"WTF";
			minz=n;
			for(auto jt=(it->second).begin();jt!=(it->second).end();jt++){
				minz=min(minz,jt->first);
			}
			// cout<<"minz<<"<<minz<<"\n";
			if(minz>=2)
				col[it->first]=minc-1;
		}
		int tot=0;
		map<int,int> uniq;
		for(auto it=col.begin();it!=col.end();it++){
			// cout<<it->first<<"is"<<it->second<<" ";
			if(uniq.find(it->second)==uniq.end())
				uniq[it->second]=++tot;
		}
		cout<<tot<<"\n";
		forn(i,n)
			cout<<uniq[col[a[i]]]<<" ";
		cout<<"\n";
	}
	return 0;
}
