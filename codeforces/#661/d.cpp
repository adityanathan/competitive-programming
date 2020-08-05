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
    int n,t;
    string s;
    cin>>t;

    while(t--){
        cin>>n>>s;
        int count=0;
    	vector<int> ans;
        set<int> one,zero;
        forn(i,0,n){
        	// debug(zero,one);
        	if(s[i]=='0'){
        		if(!one.size()){
        			zero.insert(++count);
        			ans.push_back(count);
        		}
        		else{
        			auto it=one.begin();
        			zero.insert(*it);
        			ans.push_back(*it);
        			one.erase(it);
        		}
        	}
        	if(s[i]=='1'){
        		if(!zero.size()){
        			one.insert(++count);
        			ans.push_back(count);
        		}
        		else{
        			auto it=zero.begin();
        			one.insert(*it);
        			ans.push_back(*it);
        			zero.erase(it);
        		}
        	}
        }
        cout<<count<<'\n';
        for(auto x:ans)
        	cout<<x<<' ';
        cout<<'\n';
    }
    return 0;
}