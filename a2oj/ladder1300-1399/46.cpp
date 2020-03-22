#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	int l,r;
	cin>>l>>r;
	if(x1!=x2 && y1!=y2 && abs(x1-x2)==abs(y1-y2)){
		cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2;
		return 0;
	}
	if(x1==x2){
		cout<<x1+abs(y1-y2)<<" "<<y1<<" "<<x2+abs(y1-y2)<<" "<<y2;
		return 0;
	}
	if(y1==y2){cout<<x1<<" "<<y1+abs(x1-x2)<<" "<<x2<<" "<<y2+abs(x1-x2);
		return 0;
	}
	cout<<"-1";
	return 0;
} 