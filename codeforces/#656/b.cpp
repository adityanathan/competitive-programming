#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,t,aa;
    cin>>t;

    while(t--){
        cin>>n;
        set<int> m;
        for(int i=0;i<2*n;i++){
        	cin>>aa;
        	if(m.find(aa)!=m.end())
        		cout<<aa<<' ';
        	m.insert(aa);
        }
        cout<<'\n';
    }
    return 0;
}