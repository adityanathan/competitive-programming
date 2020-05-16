#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,s;

	cin>>n>>s;
	if(n==1 && s>1){
		cout<<"yes\n"<<s<<"\n1\n";
		return 0;
	}
	if(2*n>s){
		cout<<"no\n";
		return 0;
	}
	cout<<"yes\n";
	forn(i,n-1)
		cout<<"1 ";
	cout<<n+1<<"\n";
	cout<<n<<endl;
	return 0;
}


