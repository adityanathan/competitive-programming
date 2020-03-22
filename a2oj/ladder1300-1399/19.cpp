#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,size=0,in,out,capacity=0;
	cin>>n;
	while(n--){
		cin>>out>>in;
		size+=in-out;
		capacity=max(size,capacity);
	}
	cout<<capacity;
	return 0;
}