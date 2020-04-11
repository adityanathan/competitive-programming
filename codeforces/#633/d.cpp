#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
	long long n,t,l,r,left,right,blockl,blockr,partl,partr;
	cin>>t;

	while(t--){
		cin>>n>>l>>r;
		l--;r--;
		left=l/2;
		blockl=1;
		while(left>n-blockl-1){
			left-=n-blockl++;
		}
		partl=blockl+1+left;

		right=r/2;
		blockr=1;
		while(right>n-blockr-1){
			right-=n-blockr++;
		}
		partr=blockr+1+right;

		cout<<"both"<<blockl<<" "<<partl<<" "<<blockr<<" "<<partr<<"\n";
		if(l==r){
			if(l%2==0)
				cout<<blockl<<" ";
			else cout<<partl++<<" ";
			cout<<"\n";
			continue;
		}
		if(l+1==r){
			if(l%2==0)
				cout<<blockl<<" ";
			else cout<<partl++<<" ";
			if(r%2==0)
				cout<<blockr<<" ";
			else cout<<partr++<<" ";
			cout<<"\n";
			continue;
		}
		if(l%2==0)
			cout<<blockl<<" ";
		cout<<partl++<<" ";
		if(partl>=n)
			partl=++blockl+1;

		while(blockl<blockr){
			while(partl<n){
				cout<<blockl<<" "<<partl++<<" ";
			}
			partl=++blockl+1;
		}
		while(partl<partr-1){
				cout<<blockl<<" "<<partl++<<" ";
			}
		if(partl<partr){
			cout<<blockl<<" ";
			if(r%2==1)
				cout<<partl++<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
