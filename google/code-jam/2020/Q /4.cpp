#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
typedef pair<int, int> pi;

int main(){
	int t,test,b;
	string verdict;
	cin>>test>>b;
	t=test;
	while(t-- && b==10){
		string s="";
		forn(i,10)
			s+='1';
		forn(i,10){
			cout<<i+1<<"\n";
			cin>>s[i];
		}

		cout<<s<<"\n";
	    cin>>verdict;
	    if(verdict!="Y")
	    	break;
	}
	while(t-- && b==20){
		string left="",mid="",right="";
		forn(i,10){
			left+='1';
			mid+='1';
			right+='1';
		}
		forn(i,10){
			cout<<i+1<<"\n";
			cin>>left[i];
		}

		forn(i,10){
			cout<<i+6<<"\n";
			cin>>mid[i];
		}

		cout<<s<<"\n";
	    cin>>verdict;
	    if(verdict!="Y")
	    	break;
	}
	return 0;
}