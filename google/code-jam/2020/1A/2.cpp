#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef pair<int, int> pi;

int main(){
	int t,test,n,i,j;
	cin>>test;
	t=test;
	while(t--){
		cin>>n;
		cout<<"Case #"<<test-t<<": "<<"\n";
		if(n<=500){
			forn(i,n)
				cout<<i+1<<" 1\n";
		}
		else if(n<=1000){
			cout<<"1 1\n";
			i=1;
			while(i*(i+1)/2+1<n){
				cout<<i+1<<" "<<i<<"\n";
				i++;
			}
			i--;
			j=0;
			while(i*(i+1)/2+1+j<n){
				cout<<i+1+j<<" "<<i+1+j<<"\n";
				j++;
			}
		}
		else{
			
		}
	}
	return 0;
}