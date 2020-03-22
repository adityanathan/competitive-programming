#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,count=0;
	char prev,next;
	cin>>n;
	cin>>prev;
	forn(i,n-1){
		cin>>next;
		if(prev==next){
			count++;
		}
		prev=next;
	}
	cout<<count;
	return 0;
}