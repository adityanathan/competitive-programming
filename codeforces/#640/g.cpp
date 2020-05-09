#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,i;
	cin>>t;

	while(t--){
		cin>>n;
		if(n<4){
			cout<<"-1\n";
			continue;
		}
		if(n%4==0){
			i=-1;
			while(i++<n/4-1)
				cout<<4*i+2<<" "<<4*i+4<<" "<<4*i+1<<" "<<4*i+3<<" ";
			cout<<"\n";
		}
		if(n%4==1){
			i=-1;
			while(i++<n/4-1)
				cout<<4*i+2<<" "<<4*i+4<<" "<<4*i+1<<" "<<4*i+3<<" ";
			cout<<n<<"\n";
		}
		if(n%4==2){
			i=-1;
			while(i++<n/4-1-1)
				cout<<4*i+2<<" "<<4*i+4<<" "<<4*i+1<<" "<<4*i+3<<" ";
			cout<<4*i+3<<" "<<4*i+1<<" "<<4*i+4<<" "<<4*i+6<<" "<<4*i+2<<" "<<4*i+5;
			cout<<"\n";
		}
		if(n%4==3){
			i=-1;
			while(i++<n/4-1-1)
				cout<<4*i+2<<" "<<4*i+4<<" "<<4*i+1<<" "<<4*i+3<<" ";
			cout<<4*i+3<<" "<<4*i+1<<" "<<4*i+4<<" "<<4*i+6<<" "<<4*i+2<<" "<<4*i+5<<" ";
			cout<<n<<"\n";
		}
	}
	return 0;
}


