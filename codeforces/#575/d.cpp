#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)


int main(){
	int q,n,x,y,f[4],left=-100000,right=100000,top=-100000,bottom=100000;
	
	cin>>q;
	while(q--){
		left=-100000,right=100000,top=-100000,bottom=100000;
		cin>>n;
		bool flag=false;
		forn(i,n){
			cin>>x>>y;

			

			cin>>f[0]>>f[1]>>f[2]>>f[3];
			if(f[0]==0){
				left=max(left,x);
			}
			if(f[1]==0){
				top=max(top,y);
			}
			if(f[2]==0){
				right=min(right,x);
			}
			if(f[3]==0){
				bottom=min(bottom,y);
			}
			if(left>right || top>bottom){
				
				flag=true;
			}
		}
		if(!flag){
			cout<<1<<" "<<left<<" "<<top<<"\n";
			flag=false;
		}
		else cout<<0<<"\n";
	}
	return 0;
}