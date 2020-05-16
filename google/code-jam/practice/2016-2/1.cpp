#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

vector<string> ans; 

vector<int> grow(int rps,int n){
	vector<int> v(3,0);
	if(n==1){
		v[rps]=1;
		return v;
	}
	vector<int> v1 = grow(rps,n/2), v2 = grow((rps+1)%3,n/2);
	forn(i,3)
		v[i]=v1[i]+v2[i];
	return v;
}

string str(int rps,int n){
	if(n==1)
		return ans[rps];
	string s1=str(rps,n/2),s2=str((rps+1)%3,n/2);
	return min(s1,s2)+max(s1,s2);
}

int main(){
	ans.push_back("R");ans.push_back("S");ans.push_back("P");
	int t,n,test,i;
	vector<int> v,rps(3);
	bool b;
	cin>>test;
	t=test;
	while(t--){
		cin>>n>>rps[0]>>rps[2]>>rps[1];
		n=pow(2,n);
		for(i = 0; i < 3; ++i){
			b = true;
			v = grow(i,n);
			forn(j,3)
				if(v[j]!=rps[j])
					b=false;
			if(b)
				break;
		}
		cout<<"Case #"<<test-t<<": "<<(i==3?"IMPOSSIBLE":str(i,n))<<"\n";
	}
	return 0;
}