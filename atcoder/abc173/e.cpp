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

ll p = 1000000007ll;

ll maxProductSubarrayOfSizeK(ll A[], ll n, ll k) { 
	sort(A, A+n); 
	ll product = 1;
	if(A[n-1] == 0 && (k&1)) 
		return 0;
	if(A[n-1]<=0 && (k&1)){ 
		for(int i = n-1; i>=n-k; i--) 
			product *= A[i], product%=p, product+=p, product%=p; 
		return product; 
	} 
	int i = 0, j = n-1;
	if(k & 1){ 
		product *= A[j], product%=p, product+=p, product%=p; 
		j--,k--; 
	}
	k >>= 1; 
	for(int itr = 0; itr < k; itr++) { 
		ll left_product = (A[i]*A[i+1]); 
		ll right_product = (A[j]*A[j-1]); 
		if (left_product > right_product) {
			left_product%=p; left_product+=p, left_product%=p; 
			product *= left_product, product%=p, product+=p, product%=p; 
			i += 2; 
		} 
		else { 
			right_product%=p; right_product+=p, right_product%=p; 
			product *= right_product, product%=p, product+=p, product%=p; 
			j -= 2; 
		} 
	} 
	product+=p, product%=p;
	return product; 
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    ll A[n];
    forn(i,0,n)
    	cin>>A[i];
	cout << maxProductSubarrayOfSizeK(A, n, k); 
    
    return 0;
}