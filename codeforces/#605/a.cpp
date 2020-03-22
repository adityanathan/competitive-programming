#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,k;
	char a;
	cin>>n>>k;
	map<char,int> letter;
	string s;
	cin>>s;
	forn(i,k){
		cin>>a;
		letter[a]=1;
	}
	int count=0,ans=0;
	forn(i,n){
		if(letter[s[i]]==1)
			count+=1;
		else{
			ans+=count*(count+1)/2;
			count=0;
		}

	}ans+=count*(count+1)/2;
	cout<<ans;

	return 0;
}