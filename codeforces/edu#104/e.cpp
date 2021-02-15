#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,n3,n4,m1,m2,m3,x,y;
    long long ans=1e17;

    cin>>n1>>n2>>n3>>n4;
    vector<long long> a(n1), b(n2), c(n3), d(n4), b2(n2,1e17), c2(n3,1e17);
    multiset<long long> sa,sb,sc;

    vector<vector<int>> adjb(n2), adjc(n3), adjd(n4);

    for(int i=0;i<n1;i++)
    	cin>>a[i];
    for(int i=0;i<n2;i++)
    	cin>>b[i];
    for(int i=0;i<n3;i++)
    	cin>>c[i];
    for(int i=0;i<n4;i++)
    	cin>>d[i];

    cin>>m1;
    while(m1--){
    	cin>>x>>y;
    	adjb[y-1].push_back(x-1);
    }
    cin>>m2;
    while(m2--){
    	cin>>x>>y;
    	adjc[y-1].push_back(x-1);
    }
    cin>>m3;
    while(m3--){
    	cin>>x>>y;
    	adjd[y-1].push_back(x-1);
    }

    sa.insert(1e17);
    for(auto x:a)
    	sa.insert(x);
    for(int i=0;i<n2;i++){
    	for(auto x:adjb[i])
    		sa.erase(sa.find(a[x]));
    	b2[i]=min(b2[i],*sa.begin()+b[i]);
    	for(auto x:adjb[i])
    		sa.insert(a[x]);
    }

    b=b2;
    sb.insert(1e17);
    for(auto x:b)
    	sb.insert(x);
    for(int i=0;i<n3;i++){
    	for(auto x:adjc[i])
    		sb.erase(sb.find(b[x]));
    	c2[i]=min(c2[i],*sb.begin()+c[i]);
    	for(auto x:adjc[i])
    		sb.insert(b[x]);
    }

    c=c2;
    sc.insert(1e17);
    for(auto x:c)
    	sc.insert(x);
    for(int i=0;i<n4;i++){
    	for(auto x:adjd[i])
    		sc.erase(sc.find(c[x]));
    	ans=min(ans,*sc.begin()+d[i]);
    	for(auto x:adjd[i])
    		sc.insert(c[x]);
    }

    cout<<(ans==1e17?-1:ans);
    
    return 0;
}