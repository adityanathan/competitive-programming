#include<bits/stdc++.h> // derangements, recurrence
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<long long> a(n);
	a[1]=1;
	for(int i=2;i<n;i++)
		a[i]=(a[i-1]+a[i-2])*i%1000000007;
	cout<<a[n-1];
}