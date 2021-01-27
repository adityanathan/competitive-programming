#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, aa;
	cin>>n;
	vector<int> a(1e6+1), b(1e6+1);

	while(n--)
		cin>>aa, a[aa]++;

	for(int i=1;i<1e6+1;i++)
		for(int j=i;j<1e6+1;j+=i)
			b[i]+=a[j];
	
	for(int i=1;i<1e6+1;i++)
		if(b[i]>1)
			aa=i;
		
	cout<<aa;
}