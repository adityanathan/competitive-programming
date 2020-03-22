#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,count,p;

	cin>>n;
	vector<int> a(n);
	unordered_map<int,bool> give,take,give1,take1;
	forn(i,n){
		cin>>a[i];
		if(a[i]){
			give1[i+1]=true;
			take1[a[i]]=true;
		}
	}

	for(int i=n-1;i>=0;i--){
		if(give1.find(i+1)==give1.end()){
			give[i+1]=true;
			// cout<<i+1<<"<-give\n";
		}
		if(take1.find(i+1)==take1.end()){
			take[i+1]=true;
			// cout<<i+1<<"<-take\n";
		}
	}

	// cout<<"ok\n";
	auto jt=take.begin();

	p=0;
	for(auto it=give.begin();give.size()>0;jt++){
		if(take.find(p)!=take.end())
			take.erase(p);
		if(jt==take.end())
			jt=take.begin();
		if(it==give.end())
			it=give.begin();
		// cout<<it->first<<"&"<<jt->first<<"\n";
		if(it->first==jt->first){
			continue;
		}
		if(give.size()==2){
			// cout<<"hello";
			it=give.begin();
			jt=take.begin();
			if(it->first==jt->first){
				jt++;
				a[it->first-1]=jt->first;
				jt=take.begin();
				it++;
				a[it->first-1]=jt->first;
				break;
			}
			else {
				it++;jt++;
				if(it->first==jt->first){
					it=give.begin();
					a[it->first-1]=jt->first;
					jt=take.begin();
					it++;
					a[it->first-1]=jt->first;
					break;
				}
				else {
					a[it->first-1]=jt->first;
					it=give.begin();
					jt=take.begin();
					a[it->first-1]=jt->first;
					break;
				}
			}
		}
		a[it->first-1]=jt->first;
		// cout<<"done "<<(it->first)<<"as"<<jt->first<<"\n";
		p=jt->first;
		give.erase(it->first);
		it=give.begin();
		
		// cout<<"hii1";
		
		// cout<<"hii1";
		// cout<<"hii";

	}


	forn(i,n){
		cout<<a[i]<<" ";
	}

	return 0;
}