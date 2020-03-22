#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,l,r,counte=0,p;
	
	cin>>n;
	map<int,int> m,edges;
	forn(i,n){
		cin>>l>>r;
		m[l]=r;
	}

	for(auto it=m.begin(); it!=m.end() && counte<n; it++){
		for(auto jt=it; jt!=m.end() && jt->first<it->second; jt++){
			if(jt->first==it->first)
				continue;
			if(jt->first<it->second && jt->second>it->second){
				if(edges.find(it->first)==edges.end() && edges.find(jt->first)==edges.end())
				{edges[it->first]=it->first;
					edges[jt->first]=it->first;
				}
				else if(edges.find(it->first)==edges.end() && edges.find(jt->first)!=edges.end())
					{edges[it->first]=min(edges[jt->first],it->first);
					edges[jt->first]=min(edges[jt->first],it->first);
				}
				else if(edges.find(it->first)!=edges.end() && edges.find(jt->first)==edges.end()){
					edges[jt->first]=min(edges[it->first],it->first);
					edges[it->first]=min(edges[it->first],it->first);
				}
				else{
					p=min(it->first,min(edges[jt->first],edges[it->first]));
					edges[it->first]=edges[jt->first]=p;
				}
				cout<<it->first <<" "<<it->second<<" & "<<jt->first<<" "<<jt->second<<"\n";
				counte++;
			}
	}
	}

	if(counte!=n-1){
		cout<<"NO";//<<counte;
		return 0;
	}

	cout<<"\n\n";

	for(auto it=m.begin();it!=m.end();it++){
		if(edges.find(it->first)==edges.end()){
			cout<<"NO";//<<it->first;
			// return 0;
		}
		else if(edges[it->first]!=edges.begin()->second){
			cout<<"NO";
			// return 0;
		}
		cout<<it->first<<" "<<edges[it->first]<<"\n";
	}
	cout<<"YES";
	

	return 0;
}