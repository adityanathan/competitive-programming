#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l,r,t,test;
    cin>>test;
	t=test;

    vector<int> isprime(33333,1), primes;

    forn(i,2,33333)
        if(isprime[i]){
            for(int j=i*i;j<33333;j+=i)
                isprime[j]=0;
            primes.push_back(i);
        }
    primes.erase(primes.begin());

    while(t--){
        cin>>l>>r;
        int ans=0;
        vector<bool> range(r-l+1,1); // numbers in [L,R] with single odd-factor
        for(auto p:primes)
            for(int j=max(p,(l+p-1)/p)*p;j<=r;j+=p)
                if(j/p&(-j/p))
                    range[j-l]=0;
        
        for(int i=l;i<=r;i++){
            if(i%4==2)
                ans++;
            else if(range[i-l])
                ans++;
        }
        
        cout<<"Case #"<<test-t<<": "<< ans <<'\n';
    }
    return 0;
}