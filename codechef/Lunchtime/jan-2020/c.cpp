#include <bits/stdc++.h>
using namespace std;

int lis(vector<int> const& a) {
    int n = a.size();
    const int INF = 1e9;
    vector<int> d(n+1, INF);
    d[0] = -INF;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            if (d[j-1] < a[i] && a[i] < d[j])
                d[j] = a[i];
        }
    }

    int ans = 0;
    for (int i = 0; i <= n; i++) {
        if (d[i] < INF)
            ans = i;
    }
    return ans;
}

int main(){
    int n,t, inf=1e9;
    string s;
    cin>>t;

    while(t--){
        cin>>n>>s;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        	a[i]=s[i]-'0';
	    vector<int> d(n+1, inf);
	    d[0] = -inf;

	    for(int i = 0; i < n; i++){
	        int j = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
	        if (d[j-1] <= a[i] && a[i] <= d[j])
	            d[j] = a[i];
	    }
	    
	    int ans = 0;
	    for (int i = 0; i <= n; i++)
	        if (d[i] < inf)
	            ans = i;
        cout<<n-ans<<'\n';
    }
    return 0;
}