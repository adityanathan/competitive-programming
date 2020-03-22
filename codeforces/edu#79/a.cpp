#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,a[3];
	string s,h;
	
	cin>>n;

	while(n--){
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		if(a[2]>1+a[0]+a[1])
			cout<<"No\n";
		else cout<<"Yes\n";
		
	}

	

	return 0;
}