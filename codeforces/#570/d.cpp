#include<bits/stdc++.h>
using namespace std;

int main(){
	int q,n,k;
	cin>>q;
	while(q--){
		cin>>n;
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>k;
			if(m.find(k)==m.end())
				m[k]=0;
			m[k]++;
		}

		vector< pair <int,int> > vect; 

		for (auto it=m.begin();it!=m.end();it++) 
        	vect.push_back( make_pair(it->second,it->first));

        sort(vect.begin(),vect.end());
		int count=vect[vect.size()-1].first;
		//cout<<"now "<<vect[vect.size()-1].second<< " gives "<< vect[vect.size()-1].first<<"\n";
		int county=0;
		for(int i=vect.size()-2;i>=0;i--){
			if(vect[i].first<=0) break;
			while(vect[i].first==vect[i+1].first){
				county++;
				continue;
				//cout<<"now "<<vect[i].second<< " gives "<< vect[i].first<<"\n";
			} 
			if(vect[i+county+1].first-vect[i].first>county){count+=vect[i+county+1].first*county;
				count-=county*(county+1)/2;}
			else{count+=vect[i+county+1].first*(vect[i+county+1].first-vect[i].first-1)-(vect[i+county+1].first-vect[i].first-1)*(vect[i+county+1].first-vect[i].first)/2;}
			county=0;
			count+=vect[i].first;
			//cout<<"now "<<vect[i].second<< " gives "<< vect[i].first<<"\n";
			
		}

		cout<<count<<"\n";
	}
	return 0;
}