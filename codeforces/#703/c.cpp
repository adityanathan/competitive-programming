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
    int x, y, l=1, r, mid;
    
    cin>>r;

    cout<<"? "<<l<<' '<<r<<endl;
    cin>>x;

    while(l<r){
    	if(r-l==2){
    		if(x==r){
    			r--;
    			cout<<"? "<<l<<' '<<r<<endl;
    			cin>>x;
    		}
    		else if(x==l){
    			l++;
    			cout<<"? "<<l<<' '<<r<<endl;
    			cin>>x;
    		}
    		else{
    			cout<<"? "<<l<<' '<<r-1<<endl;
    			cin>>y;
    			if(x==y){
    				cout<<"! "<<l; return 0;
	    		}
	    		cout<<"! "<<r; return 0;
    		}
    	}
    	if(r-l==1){
    		if(x==l){
    			cout<<"! "<<r; return 0;
    		}
    		cout<<"! "<<l; return 0;
    	}
    	mid=(l+r)/2;
    	if(x>mid){
    		cout<<"? "<<mid+1<<' '<<r<<endl;
    		cin>>y;
    		if(y==x)
    			l=mid+1, x=y;
    		else{
    			r=mid;
    			cout<<"? "<<l<<' '<<r<<endl;
    			cin>>x;
    		}
    	}
    	else{
    		cout<<"? "<<l<<' '<<mid<<endl;
    		cin>>y;
    		if(y==x)
    			r=mid, x=y;
    		else{
    			l=mid+1;
    			cout<<"? "<<l<<' '<<r<<endl;
    			cin>>x;
    		}
    	}
    }
    
    return 0;
}