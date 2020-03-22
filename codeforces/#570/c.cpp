#include<bits/stdc++.h>
using namespace std;

int main(){
	int q,n,k,a,b;
	cin>>q;
	while(q--){
		
		cin>>k>>n>>a>>b;
		if(k-n*a>0)
			{cout<<n<<"\n"; continue;}
		if(k-n*b<=0)
			{cout<<"-1\n"; continue;}
		int nn=n;
		while(k-n*b>0 && k>b){
			k-=a;
			n--;
		}
		cout<<nn-n-1<<"\n";
	}
	return 0;
}