#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

int main(){
	int n,a;
	cin>>n;
	map<int,vector<int> > m;
	forn(i,n){
		cin>>a;
		if(a>0)
			m[1].push_back(a);
		else if(a==0)
			m[0].push_back(a);
		else m[-1].push_back(a);
	}
	if(m[1].size()>0){
		cout<<1<<" "<<m[-1][0]<<"\n";
		cout<<1<<" "<<m[1][0]<<"\n";
		cout<<m[-1].size()+m[0].size()+m[1].size()-2<<" ";
		for(int i=1;i<m[-1].size();i++){
			cout<<m[-1][i]<<" ";
		}
		for(int i=0;i<m[0].size();i++){
			cout<<m[0][i]<<" ";
		}
		for(int i=1;i<m[1].size();i++){
			cout<<m[1][i]<<" ";
		}
	}
	else{
		cout<<1<<" "<<m[-1][0]<<"\n";
		cout<<2<<" "<<m[-1][1]<<" "<<m[-1][2]<<"\n";
		cout<<m[-1].size()+m[0].size()+m[1].size()-3<<" ";
		for(int i=3;i<m[-1].size();i++){
			cout<<m[-1][i]<<" ";
		}
		for(int i=0;i<m[0].size();i++){
			cout<<m[0][i]<<" ";
		}
	}
	return 0;
}