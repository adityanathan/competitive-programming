#include<bits/stdc++.h>
#include <string> 
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

string digitSum(string s){
	int n=0;
	forn(i,s.length()){
		n+=s[i]-48;
	}
	return to_string(n);
}

int main(){
	int count=0;
	string s;
	cin>>s;
	while(s.length()>1){
		count+=1;
		s=digitSum(s);
	}
	cout<<count;
	return 0;
}