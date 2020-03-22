#include<bits/stdc++.h>
using namespace std;

int main(){
	int q,n,k,max=-1000000000,min=1000000000;
	cin>>q;
	while(q--){
		max=-1000000000,min=1000000000;
		cin>>n>>k;
		vector <int> a(n,0);
		for(int i=0;i<n;i++){
			cin>>a[i];
			if (a[i]>max) max=a[i];
			if (a[i]<min) min=a[i];
		}

		if(max-min>2*k) {cout<<"-1\n"; continue;}
		cout<<min+k<<"\n";
	}
	return 0;
}