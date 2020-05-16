#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long t,l,r,test,n,x,i,count;
	bool b;

	cin>>test;
	t=test;

	while(t--){
		cin>>l>>r;
		b=true;
		cout<<"Case #"<<test-t<<": ";

		if(l<=r)
			b=false;

		i=max((long long)sqrt(2*(abs(l-r)))-5,(long long)0);

		while(i*(i+1)/2<=abs(l-r))
			i++;

		if(b)
			l-=i*(i-1)/2;
		else{
			r-=i*(i-1)/2;
		}
		x = max((long long) 0, (long long) sqrt(min(l,r))-(long long)sqrt(5*i)-10);
		if(l>=r){
			l-=x*(x+i-1);
			r-=x*(x+i);
		}
		else{
			r-=x*(x+i-1);
			l-=x*(x+i);
		}
		i+=2*x;

		while(i<=max(l,r)){
			if(l>=r){
				if(l>=i)
					l-=i++;
			}
			else
				if(r>=i)
					r-=i++;
		}
		cout<<i-1<<" "<<l<<" "<<r<<"\n";
	}
	return 0;
}