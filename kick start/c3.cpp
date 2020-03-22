#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;

int main(){
	int t,test,n,k;
	cin>>test;
	t=test;
	while(t--){
		cin>>n>>k;
		map<int,vector<int> > m;
		int a[n],p[n];
		for(int i=0;i<n;i++)
			cin>>p[i];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++){
			if(m.find(a[i])==m.end()){
				vector<int> m[a[i]];
				
			}

			 m[a[i]].push_back(p[i]);
		}
		map<int, vector<int> >::iterator itr; 
		for (itr = m.begin(); itr != m.end(); ++itr) { 
	        sort((itr->second).rbegin(), (itr->second).rend()); 
	    }
	    for (itr = m.begin(); itr != m.end(); ++itr) { 			//print hashmap chains
	    	cout<< "["<<itr->first<<"]";
	        for (int x : itr->second) 
	    		cout << " -> "<<x ;
	    	cout<<" -|\n";
	    }

	    priority_queue<pi, vector<pi>, greater<pi> > minHeap;
	    map<int,int> traversed;

	    for (itr = m.begin(); itr != m.end(); ++itr) { 
	    	pi pp;
	    	pp.first=(itr->second).back();
	    	pp.second=itr->first;
	    	(itr->second).pop_back();
	        minHeap.push(pp);
	        traversed[itr->first]=0;
	    }

	    pi dog;
		int ans=0;

	    while(k--){
	    	dog = minHeap.top();
	    	minHeap.pop();
	    	cout<<" ("<<dog.first<<","<<dog.second<<") ";
	    	ans+=(dog.first);
	    	traversed[dog.second]=dog.first;
	    	if(m[dog.second].size()){
		    	pi pp;
		    	pp.first=m[dog.second].back()-traversed[dog.second];
		    	pp.second=dog.second;
		    	m[dog.second].pop_back();
		        minHeap.push(pp);
		    }
	    }

		cout<<"Case #"<<test-t<<": "<<2*ans-dog.first;
	}
	return 0;
}