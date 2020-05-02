#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,k;
	string ss;
	cin>>t;

	while(t--){
		cin>>n>>k>>ss;
		sort(ss.begin(), ss.end()); 
		vector<string> s(k,"");
		if(ss[0]!=ss[k-1]){
			cout<<ss[k-1]<<"\n";
			continue;
		}
		// int i=0;
		// while(i<n){
		// 	s[i%k]+=ss[i];
		// 	if(i%k==k-1)
		// 		if(s[0][i/k]!=s[k-1][i/k])
		// 			break;
		// 	i++;
		// }
		if(ss[k]!=ss[ss.length()-1])
			cout<<ss[0]+ss.substr(k,n)<<endl;
		else
			cout<<ss[0]+ss.substr(k,(ss.length()-1)/k)<<endl;
	}
	return 0;
}


