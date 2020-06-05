#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int i,n,temp;
	long long sum = 0;
	
	cin>>n;
	vector<int> x(n);

	for(i=0;i<n;++i)
		cin>>x[i];

	for(i=0;i<n;++i){
		cin>>temp;
		x[i]^=temp;
	}

	for(i=0;i<n;++i){
		cin>>temp;
		sum+=x[i]^temp&(temp&~x[i]?~x[i]:-temp);
	}

	cout<<sum;
}