#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,t,i=0;
	cin>>n>>t, t--;
	vector<int> a(n-1);
	for(int i=0;i<n-1;i++)
		cin>>a[i];

	while(i<t)
		i+=a[i];
	cout<<(i==t?"YES":"NO");
}