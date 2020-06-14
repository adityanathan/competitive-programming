#include<bits/stdc++.h>
using namespace std;
#define forn(i,x,n) for(int i = x; i < n; ++i)
typedef long long ll;

ll gcd(ll a, ll b){
	return b==0?a:gcd(b,a%b);
}

unordered_map<ll,int> pf(ll n){  
	unordered_map<ll,int> m;
	while(n%2==0) 
		m[2]++, n/=2;
	for(int i=3;i<=sqrt(n);i+=2)
		while(n%i==0)  
			m[i]++, n/=i;
	if(n>2)  
		m[n]++;
	return m;  
}

int main(){}