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
    int n,l=1,r,x,y;
    
    cin>>n;
    r=n;
    vector<int> a(n);
    while(l<r){
    	cout<<"? "<<l<<' '<<r<<endl;
    	cin>>x;
    	cout<<"? "<<r<<' '<<l<<endl;
    	cin>>y;
    	if(x>y)
    		a[l-1]=x, l++;
    	else
    		a[r-1]=y, r--;

    }
    cout<<"! ";
    for(auto x:a)
    cout<<(x==0?n:x)<<' ';
    
    return 0;
}