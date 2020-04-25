#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

long long power(long long x, unsigned int y, long long p)  {  
    long long res = 1;
    x = x % p;
   
    if (x == 0) 
    	return 0;
    while (y > 0)  {  
        if (y & 1)  
            res = (res*x) % p;  
        y = y>>1; 
        x = (x*x) % p;  
    }  
    return res;  
}  
  
int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,k,i;
	long long sum,twon;
	cin>>t;//t=1;

	while(t--){
		cin>>n;
		twon=power(2,n,998244353);
		vector<int> a(n);
		map<int,int> m;
		sum=0;
		forn(i,n){
			cin>>a[i];
			m[a[i]]++;
		}
		i=1;
		forit(it,m){
			if(it->first!=i)
				break;
			else i++;
		}
		// cout<<i<<" ";
		forit(it,m){
			if(it->first>i)
				break;
			sum+=((it->first)*((twon/power(2,it->second,998244353))%998244353))%998244353;
			sum%=998244353;
			twon=(twon-twon/power(2,it->second,998244353))%998244353;
			// cout<<sum<<" ";
		}
		sum+=(i)*(twon)%998244353;
		cout<<sum<<endl;
	}
	return 0;
}


