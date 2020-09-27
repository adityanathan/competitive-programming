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
        vector<ll> a(n);
        ll sum=0;
        bool f=true;

        forn(i,0,n)
        	cin>>a[i],sum+=a[i];

        if(sum%n){
        	cout<<"-1\n";
        	continue;
        }
        string ans;
        int cnt=2*n-2;
        forn(i,1,n){
        	if(a[i]-a[i]/(i+1)*(i+1)<=sum/n){
        		ans+=to_string(i+1)+" 1 "+to_string(a[i]/(i+1))+"\n";
        		a[0]+=a[i]/(i+1)*(i+1), a[i]-=a[i]/(i+1)*(i+1);
        	}
        	else{
        		ans+="1 "+to_string(i+1)+' '+to_string(sum/n+i+1-(a[i]-a[i]/(i+1)*(i+1)))+"\n";
        		a[0]-=sum/n+i+1-(a[i]-a[i]/(i+1)*(i+1)), a[i]+=sum/n+i+1-(a[i]-a[i]/(i+1)*(i+1));
        	}
        }
        forn(i,1,n)
        	if(sum/n<a[i]){
        		cnt+=1;
        		ans+=to_string(i+1)+" 1 "+to_string((a[i]-sum/n)/(i+1))+"\n";
        		a[0]+=a[i]-sum/n, a[i]-=a[i]-sum/n;
        	}
        forn(i,1,n){
    		ans+="1 "+to_string(1+i)+' '+to_string(sum/n-a[i])+'\n';
    		a[0]-=sum/n-a[i], a[i]+=sum/n-a[i];
    	}
        debug(a);
        cout<<(f&&(cnt<=3*n)?to_string(cnt)+'\n'+ans:"-1\n");
        
    }
    return 0;
}