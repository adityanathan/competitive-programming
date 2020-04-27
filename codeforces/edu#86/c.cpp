#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

long long gcd(long long a, long long b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
}

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long a,b,q,t,l,r,temp,ans,x,pl,count;
	cin>>t;

	while(t--){
		cin>>a>>b>>q;
		temp=min(a,b);
		a=max(a,b);
		b=temp;
		a/=gcd(a,b);
		b/=gcd(a,b);
		while(q--){
			count=0;
			cin>>l>>r;
			ans=abs(l-r)+1;
			if(a%b==0)
				ans = 0;
			else{
				pl=(l%a?l/a+1:l/a);
				x=a*pl;
				while(x<=r && pl%b){
					x=a*(++pl);
				}
				if(x<=r){
					ans-=a*((r-x)/b);
					x=a*(pl+(r-x)/b);
				}
				if(x>r){
					x=a*(pl-1);
					if(pl%b)
						ans-=(r-x+1);
				}


			}
			cout<<ans<<" ";
		}
		cout<<endl;
	}
	return 0;
}


