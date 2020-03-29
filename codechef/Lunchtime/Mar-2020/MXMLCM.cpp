#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

unordered_map<int,int> pf(int n){
	unordered_map<int,int> m;
	while (n%2 == 0){
	  m[2]++;
	  n = n/2;
	}
	for (int i = 3; i <= sqrt(n); i = i+2){
	  while (n%i == 0){
	     m[i]++;
	     n = n/i;
	  }
	}
	if (n > 2)
		m[n]++;
	return m;
}

int main(){
	int t,n,M,maxi,maximp,imp,ai;
	unordered_map<int,int> mi;
	cin>>t;
	while(t--){
		cin>>n>>M;
		unordered_map<int,int> m;
		forn(i,n){
			cin>>ai;
			mi=pf(ai);
			for(auto it=mi.begin();it!=mi.end();it++){
				if(m.find(it->first)==m.end() || m[it->first]<it->second)
					m[it->first]=it->second;
			}
		}
		maxi=1;
		maximp=1;
		for(int i=2;i<=M;i++){
			mi = pf(i);
			imp=1;
			for(auto it=mi.begin();it!=mi.end();it++){
				if(m.find(it->first)==m.end()){
					imp*=pow(it->first,it->second);
				}
				else{
					if(m[it->first]<it->second)
						imp*=pow(it->first,it->second-m[it->first]);
				}
			}
			maxi=maximp<imp?i:maxi;
			maximp=max(maximp,imp);
		}
		cout<< maxi <<"\n";
	}
	return 0;
}