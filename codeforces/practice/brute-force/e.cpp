#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,k,count=0,color=0,tot;
	string s,ori;


	cin>>n>>k>>s;
	ori=s;
	forn(i,n-1){
		if(s[i+1]!=s[i])
			continue;
		else if(i<n-2){
			tot=k;
			while((tot--) && (s[i]==s[i+1] || s[i+1]==s[i+2])){
				cout<<"tot"<<tot<<" ";
				s[i+1]=(color++)%k+'A';
			}
			cerr<<"done"<<i<<" "<<s<<"\n";
			if(tot<=0){
				cout<<"hoot"<<i<<"\n";
				s[i+1]=ori[i+1];
				while(s[i]==s[i+1])
					s[i]=(color++)%k+'A';
			}
		}
		else 
			while(s[i]==s[i+1])
				s[i+1]=(color++)%k+'A';
		count++;
	}
		
	cout<<count<<"\n"<<s;

	return 0;
}


