#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin>>n;
	vector<int> a(1e6+1);
	for(int i=1;i<1e6+1;i++)
		for(int j=i;j<1e6+1;j+=i)
			a[j]++;
	while(n--){
		cin>>x;
		cout<<a[x]<<'\n';
	}
}