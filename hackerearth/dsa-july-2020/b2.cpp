#include <bits/stdc++.h> 

using namespace std; 
#include "../debug.h"
#define forn(i,x,n) for(int i = x; i < n; ++i)
typedef long long ll;

int main() 
{ 
	long long n,ans=0,sum;
    string s;
    cin>>n>>s;

	forn(i,0,n){
		sum=0;
		forn(j,i,n)
			sum+=(s[j]=='a')-(s[j]=='c'),ans+=sum>0;
	}
	cout << ans; 
} 
