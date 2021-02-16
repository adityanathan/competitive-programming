#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<long long> a(n), ans;
        long long curr=0, mx=0;
        map<long long,vector<int>> m;
        for(int i=0;i<n;i++)
        	cin>>a[i], m[a[i]].push_back(i), mx=max(mx,a[i]);
        long long prev=-1;
        for(auto it=m.begin();it!=m.end();++it){
        	curr+=it->first*it->second.size();
        	auto jt=it; jt++;
        	if(it->first!=mx && curr<jt->first)
        		prev=it->first;
            // cout<<it->first<<' '<<curr<<' '<<jt->first<<' '<<prev<<'\n';
        }

        for(auto x:m)
        	if(prev<x.first)
	        	for(auto z:x.second)
	        		ans.push_back(z+1);
        

        cout<<ans.size()<<'\n';
        sort(ans.begin(),ans.end());
        for(auto x:ans)
        	cout<<x<<' ';
        cout<<'\n';
    }
    return 0;
}