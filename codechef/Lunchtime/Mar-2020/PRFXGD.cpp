#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	int t,n,x,k,korg;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		n=s.length();
		cin>>k>>x;
		korg=k;
		map<char,int> m;
		int i=0;
		for(i=0;i<n;i++){
			m[s[i]]++;
			for(auto it=m.begin();it!=m.end();it++){
				if(it->second>x){
					m[it->first]--;
					k--;
					break;
					// cout<<it->first<<" ";
				}
			}
			// cout<<"k"<<k<<" ";
			if(k<0)
				break;
		}
		if(k<0)
			cout<<i-korg<<"\n";
		else
			cout<<i+(k-korg)<<"\n";
	}
	return 0;
}