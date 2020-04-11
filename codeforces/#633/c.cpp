#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

long long max(long long a,long long b){
		return a>b?a:b;
}
int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
	int n,t,mi;
	long long dam,pp;
	cin>>t;

	while(t--){
		cin>>n;
		vector<long long> a(n),b(n);
		forn(i,n)
			cin>>a[i]>>b[i];
		mi=0;
		dam=0;
		forn(i,n)
			mi=a[i]-max(0,a[i]-b[(n+i-1)%n])<
			a[mi]-max(0,a[mi]-b[(n+mi-1)%n])?i:mi;
		dam=a[mi];
		forn(i,n-1){
			pp=a[(mi+i+1)%n]-b[(n+mi+i)%n];
			if(pp>0)
				dam+=pp;
		}
		cout<<dam<<"\n";
	}
	return 0;
}
