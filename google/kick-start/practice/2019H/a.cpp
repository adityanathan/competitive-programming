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
    int n,t,test,aa,count,ind;
    cin>>test;
	t=test;

    while(t--){
        cin>>n;
        priority_queue<int,vector<int>,greater<int>> pq;
        ind=count=0;
        cout<<"Case #"<<test-t<<": ";
        forn(i,0,n){
        	cin>>aa;
        	if(aa>ind)
        		count++,pq.push(aa);
        	ind+=count>ind;
        	while(pq.size() && pq.top()<=ind)
        		count--,pq.pop();
        	cout<<ind<<' ';
        }
        cout<<'\n';
    }
    return 0;
}