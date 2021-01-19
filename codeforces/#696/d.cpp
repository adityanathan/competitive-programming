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
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n), b(n);
        bool super=1, ans=1;
        forn(i,0,n)
        	cin>>a[i], b[i]=a[i];
        int i=0,j=n-1;
        while(i<j){
        	if(a[i]<=a[i+1]){
	        	a[i+1]-=a[i], a[i]=0;
	        	i++;
        	}
        	if(i==j)
        		break;
        	if(a[j-1]>=a[j]){
	        	a[j-1]-=a[j], a[j]=0;
	        	j--;
        	}
        	if(a[i]>a[i+1]&&a[j-1]<a[j]&&super)
        		super=0, swap(a[i+1],a[j-1]);
        	else if(a[i]>a[i+1]&&a[j-1]<a[j]&&!super)
        		ans=0;
        }
        forn(i,0,n)
        	if(a[i])
        		ans=0;
        cout<<(ans?"YES":"NO")<<'\n';
    }
    return 0;
}