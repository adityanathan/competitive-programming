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
    int n;

    cin>>n;
    vector<int> a(n+2,1e9);
    int l=1, r=n, mid;

    while(l<=r){
    	if(abs(r-l)<40){
    		for(int i=l;i<=r;i++){
    			cout<<"? "<<i<<endl;
    			cin>>a[i];
    		}
    		for(int i=l;i<=r;i++)
    			if(a[i]<min(a[i-1],a[i+1])){
    				cout<<"! "<<i;
    				return 0;
    			}
    	}
    	mid=(l+r)/2;
    	cout<<"? "<<mid-1<<endl;
    	cin>>a[mid-1];
    	cout<<"? "<<mid<<endl;
    	cin>>a[mid];
    	cout<<"? "<<mid+1<<endl;
    	cin>>a[mid+1];
    	if(a[mid]<min(a[mid-1],a[mid+1])){
    		cout<<"! "<<mid;
    		return 0;
    	}
    	if(a[mid-1]<a[mid]&&a[mid]<a[mid+1])
    		r=mid;
    	else
    		l=mid;
    }

    return 0;
}