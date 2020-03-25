#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
int main(){
	long long n,k,t,a;

	cin>>t;

	while(t--){
		cin>>n;
		map<int,int> m,dau;
		forn(i,n){
			cin>>k;
			forn(j,k){
				cin>>a;
				if (m.find(a-1)==m.end()){
					// cout<<i+1<<" marry "<<a<<"\n";
					m[a-1]=true;
					dau[i]=true;
					while(++j<k)
						cin>>a;
				}
			}
		}
		if(m.size()<n){
			cout<<"IMPROVE\n";
			forn(i,n)
				if (dau.find(i)==dau.end()){
					cout<<i+1<<" ";
					break;
				}
			forn(i,n)
				if(m.find(i)==m.end()){
					cout<<i+1<<"\n";
					break;
				}
		}
		else 
			cout<<"OPTIMAL\n";
					
	}
	return 0;
}
