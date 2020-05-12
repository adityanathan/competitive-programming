#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

vector<int> divs(int n) 
{ 
	vector<int> v;
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                v.push_back(i-1) ;
  
            else // Otherwise print both 
                {v.push_back(i-1) ;
                	v.push_back(n/i-1) ;}
        } 
    } 
    return v;
}

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,ans;
	vector<int> div;
	cin>>t;

	while(t--){
		cin>>n;
		vector<int> a(n),b(n,1);
		forn(i,n)
			cin>>a[i];
		forn(i,n){
			div = divs(n-i);
			for(int x:div){
				if(x+1<n-i && a[x]<a[n-i-1])
					b[x]=max(b[x],b[n-i-1]+1);
			}
		}
		ans=0;
		forn(i,n)
			ans=max(ans,b[i]);
		cout<<ans<<endl;
	}
	return 0;
}


