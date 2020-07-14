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

ll conquer(int a[], int l, int mid, int r) { 

    ll sum = 0; 
    vector<int> le,ri;
    map<int,int> left,right;

    forn(i,l,mid+1){
    	left[a[i]]++;
    	le.push_back(left[a[i]]);
    }
    sort(le.begin(),le.end());
    for(int j=r;j>mid;j--){
    	right[a[j]]++;
    	auto it = upper_bound(le.begin(),le.end(),right[a[j]]);
    	sum+=le.end()-it;
    }

    return sum; 
} 

ll divide(int a[], int l, int r) { 
	if(l == r) 
    	return 0; 
   int m = (l+r)/2;
   return divide(a,l,m) + divide(a,m+1,r) + conquer(a,l,m,r); 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    
    cin>>n;
    int a[n];
    forn(i,0,n)
    	cin>>a[i];
    cout<<divide(a,0,n-1)<<'\n';
    
    return 0;
}