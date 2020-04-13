#include<bits/stdc++.h>
	using namespace std;
	#define forn(i, n) for(int i = 0; i < n; ++i)
	#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

	int main(){
		ios_base::sync_with_stdio(false); 
	    	cin.tie(NULL);   
		int n,t,cnt,ma,uniq;
		cin>>t;
	
		while(t--){
			cin>>n;
			vector<int> a(n);
			map<int,int> m;
			uniq=0;
			cnt=ma=0;
			forn(i,n){
				cin>>a[i];
				if(m.find(a[i])==m.end())
					uniq++;
				m[a[i]]++;
			}
			forit(it,m){
				if(it->second==1)
					cnt++;
				ma=it->second>m[ma]?it->first:ma;
			}
			if(cnt<=1 && m[ma]<=1)
				cout<<"0\n";
			else if(uniq<m[ma])
				cout<<min(m[ma]-1,uniq)<<"\n";
			else
				cout<<min(m[ma],uniq-1)<<"\n";
		}
		return 0;
	}
	
