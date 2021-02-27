#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        unordered_set<int> ans;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        	cin>>a[i];
        for(int i=0;i<n;i++){
        	multiset<int> curr;
        	curr.insert(a[i]);
        	for(int j=i+1;j<n;j++){
        		curr.insert(a[j]);
        		if(curr.size()>2)
        			curr.erase(curr.begin());
        		ans.insert(*curr.rbegin()-*(curr.begin()));
        	}
        }

        cout<<ans.size()<<'\n';
    }
    return 0;
}