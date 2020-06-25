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

vector<int> a;
int n,t;

ll kadane(){ 
	ll max_so_far=INT_MIN, max_ending_here=0, start=0, end=0, s=0; 

	forn(i,0,n){ 
		max_ending_here += i%2?a[i]:-a[i];
		if(i%2==0)
			continue;

		if(max_so_far < max_ending_here){ 
			max_so_far = max_ending_here; 
			start = s;
			end = i;
		}
		if(max_ending_here < 0){ 
			max_ending_here = 0; 
			s = i+1; 
		}
	}
	max_ending_here=0, start=0, end=0, s=0;
	forn(i,1,n){ 
		max_ending_here += i%2?a[i]:-a[i];
		if(i%2)
			continue;
		if(max_so_far < max_ending_here){ 
			max_so_far = max_ending_here; 
			start = s; 
			end = i; 
		}
		if(max_ending_here < 0){ 
			max_ending_here = 0; 
			s = i+1; 
		}
	}
	return max(0ll,max_so_far); 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;

    while(t--){
        cin>>n;
        a.assign(n,0);
        ll sum=0;
        forn(i,0,n){
        	cin>>a[i];
        	if(i%2==0)
        		sum+=a[i];
        }

        cout<<sum+kadane()<<'\n';
    }
    return 0;
}