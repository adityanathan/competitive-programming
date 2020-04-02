#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
typedef pair<int, int> pi;

int main(){
	int t,n,test,cnt;
	string s;
	cin>>test;
	t=test;
	while(t--){
		cin>>n>>s;
		if(s[0]=='E' && s[2*n-3]=='S')
			cout<<"Case #"<<test-t<<": "<<string(n-1,'S')+string(n-1,'E')<<"\n";
		else if(s[0]=='S' && s[2*n-3]=='E')
			cout<<"Case #"<<test-t<<": "<<string(n-1,'E')+string(n-1,'S')<<"\n";
		else if(s[0]=='E' && s[2*n-3]=='E'){
			cnt=0;
			forn(i,n){
				if(s[i]=='S')
					cnt++;
				if(s[i]=='S' && s[i+1]=='S')
					break;
			}
			cout<<"Case #"<<test-t<<": "<<string(cnt,'S')+string(n-1,'E')+string(n-1-cnt,'S')<<"\n";
		}
		else{
			cnt=0;
			forn(i,n){
				if(s[i]=='E')
					cnt++;
				if(s[i]=='E' && s[i+1]=='E')
					break;
			}
			cout<<"Case #"<<test-t<<": "<<string(cnt,'E')+string(n-1,'S')+string(n-1-cnt,'E')<<"\n";
		}
	    
	}
	return 0;
}