
#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,curr,min=numeric_limits<int>::max(),minpos,flag=false;
	cin>>n;

	forn(i,n){
		cin>>curr;
		if(min>=curr){
			if(min==curr){
				flag=true;
			}
			else flag=false;
			min=curr;
			minpos=i+1;
		}
	}
	if(flag) cout<<"Still Rozdil";
	else cout<<minpos;

	return 0;
}
