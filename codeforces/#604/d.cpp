#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(d>c || a>b){
		cout<<"NO";
		return 0;
	}
	b-=a;
	string s="";
	if(a)
		s+="0 ";
	while(--a){
		s+="1 0 ";
	}
	if(d>c || b>c){
		cout<<"NO";
		return 0;
	}
	c-=b;
	if(b)
		s+="1 ";
	while(b-1>0){
		b--;
		s+="2 1 ";
	}
	if(! (c==d || c-1==d)){
		cout<<"NO";
		return 0;
	}
	if(c==d){
		while(c>0){
			c--;
			s+="2 3 ";
		}
	}
	else{
		while(c>0){
			c--;
			s+="2 3 ";
		}
		s+="2";
	}
	if(s!=""){
		cout<<"YES\n"<<s;
		return 0;
	}
	cout<<"NO";
	return 0;
}