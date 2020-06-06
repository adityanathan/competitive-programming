#include <bits/stdc++.h>
using namespace std;

#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}
int sum(int n){
	int sum=0;
	while(n){
		sum+=n%16;
		n/=16;
	}
	return sum;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count,l,r,t;
    cin>>t;

    while(t--){
        cin>>l>>r;
        count=0;
        forn(x,l,r+1)
        	count+=gcd(x,sum(x))>1;
        cout<<count<<'\n';
    }
    return 0;
}