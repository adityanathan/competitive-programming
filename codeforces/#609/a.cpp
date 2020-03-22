#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n;

	cin>>n;

	if(n==1){
		cout<<"9 8";
		return 0;
	}
	
	if((n%2==0) || (n%3==0)){
		cout<<3*n<<" "<<2*n;
		return 0;
	}
	if(n%3 == 1){
		cout<<3*n+1<<" "<<2*n+1;
		return 0;
	}
	cout<<3*n-1<<" "<<2*n-1;
	return 0;
}