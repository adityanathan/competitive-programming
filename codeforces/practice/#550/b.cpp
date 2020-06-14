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
    int n,aa,sum=0,i=0,o=0,e=0;

    {
        cin>>n;
        vector<int> odd,eve;
        forn(i,0,n){
        	cin>>aa;
        	if(aa%2){
        		odd.push_back(aa);
        		o++;
        	}
        	else {
        		e++;
        		eve.push_back(aa);
        	}
        }
        if(abs(o-e)<=1){
        	cout<<"0";
        	return 0;
        }
        if(o>e){
        	sort(odd.begin(),odd.end());
        	n=o-e-1;
        	debug(odd,n);
        	while(n--)
        		sum+=odd[i++];
        	cout<<sum;
        	return 0;
        }
        sort(eve.begin(),eve.end());
    	n=e-o-1;
    	while(n--)
    		sum+=eve[i++];
    	cout<<sum;
    }
    return 0;
}