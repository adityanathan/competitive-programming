#include<bits/stdc++.h>
using namespace std;

int main(){
    long long ans,t,n,aa,left;
	cin>>t;

	while(t--){
		cin>>n;
        unordered_map<int,int> m;
        left=ans=0;

		for(int i=0;i<n;++i){
			cin>>aa;
            if(m[aa]>left)
                left=m[aa];
            ans+=(i+2-left)*(i+1-left)/2;
            m[aa]=i+1;
        }
		cout<<ans<<'\n';
	}
}