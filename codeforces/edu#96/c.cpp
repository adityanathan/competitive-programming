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
    int n,t,x,ans,ans2;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> od,ev,od2,ev2;
        vector<pair<int,int>> v,v2;
        forn(i,0,n)
        	if(i%2)
        		ev.push_back(i+1),ev2.push_back(i+1);
        	else
        		od.push_back(i+1),od2.push_back(i+1);
        while(od.size()+ev.size()!=1){
        	if(ev.size()>=2){
        		x=(ev[ev.size()-1]+ev[ev.size()-2])/2,
        		v.push_back({ev[ev.size()-1],ev[ev.size()-2]});
        		ev.pop_back(), ev.pop_back();
        		if(x%2)
	        		od.push_back(x);
	        	else
	        		ev.push_back(x);
        	}
        	else if(od.size()>=2){
        		x=(od[od.size()-1]+od[od.size()-2])/2,
        		v.push_back({od[od.size()-1],od[od.size()-2]});
        		od.pop_back(), od.pop_back();
        		if(x%2)
	        		od.push_back(x);
	        	else
	        		ev.push_back(x);
        	}
        	else{
        		x=(ev[ev.size()-1]+od[od.size()-1]+1)/2,
        		v.push_back({od[od.size()-1],ev[ev.size()-1]});
        		ev.pop_back(), od.pop_back();
        		if(x%2)
	        		od.push_back(x);
	        	else
	        		ev.push_back(x);
	        }
        	
	        
        	if(od2.size()>=2){
        		x=(od2[od2.size()-1]+od2[od2.size()-2])/2,
        		v2.push_back({od2[od2.size()-1],od2[od2.size()-2]});
        		od2.pop_back(), od2.pop_back();
        		if(x%2)
	        		od2.push_back(x);
	        	else
	        		ev2.push_back(x);
        	}
        	else if(ev2.size()>=2){
        		x=(ev2[ev2.size()-1]+ev2[ev2.size()-2])/2,
        		v2.push_back({ev2[ev2.size()-1],ev2[ev2.size()-2]});
        		ev2.pop_back(), ev2.pop_back();
        		if(x%2)
	        		od2.push_back(x);
	        	else
	        		ev2.push_back(x);
        	}
        	else{
        		x=(ev2[ev2.size()-1]+od2[od2.size()-1]+1)/2,
        		v2.push_back({od2[od2.size()-1],ev2[ev2.size()-1]});
        		ev2.pop_back(), od2.pop_back();
        		if(x%2)
	        		od2.push_back(x);
	        	else
	        		ev2.push_back(x);
        	}
	        
        }
        if(od.size())
        	ans=od[0];
        else
        	ans=ev[0];
        if(od2.size())
        	ans2=od2[0];
        else
        	ans2=ev2[0];
        cout<<min(ans,ans2)<<'\n';
        if(ans<ans2)
        	for(auto x:v)
        		cout<<x.first<<' '<<x.second<<'\n';
        else
        	for(auto x:v2)
        		cout<<x.first<<' '<<x.second<<'\n';
    }
    return 0;
}