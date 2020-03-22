#include<bits/stdc++.h>
using namespace std;w
int main(){
	int n,m,ans;
	cin>>n>>m;
	if(n==0) ans=0;
	else if(m==0){
		ans=1;
	}
	else if(m==n){
		ans=0;
	}
	else {
		if (n/2>=m)
			ans=m;
		else ans=n-m;
	}

	cout<<ans;
	return 0;
}