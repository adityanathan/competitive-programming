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
    ll n,t,rem,temp;
    cin>>t;

    while(t--){
        cin>>n;
        vector<ll> a(n),a2,b(n),b2,c(n);
        forn(i,0,n)
        	cin>>a[i];
        a2=a;
        forn(i,0,n)
        	cin>>b[i];
        b2=b;
        rem=0;
        forn(i,0,n){
        	temp=min(a[i],rem);
        	a[i]-=temp,rem-=temp;
           	temp=min(a[i],b[i]);
        	a[i]-=temp,b[i]-=temp;
        	rem=b[i],b[i]=0;
        }
        temp=min(a[0],rem);
    	a[0]-=temp,rem-=temp;
       	temp=min(a[0],b[0]);
    	a[0]-=temp;
    	b[0]-=temp;
    	rem=b[0];
        b[0]=0;
    	if(a!=c){
            for(int i=n-1;i>=0;i--){
                temp=min(a2[(i+1)%n],rem);
                a2[(i+1)%n]-=temp,rem-=temp;
                temp=min(a2[(i+1)%n],b2[i]);
                a2[(i+1)%n]-=temp,b2[i]-=temp;
                rem=b2[i],b2[i]=0;
            }
            temp=min(a2[0],rem);
            a2[0]-=temp,rem-=temp;
            temp=min(a2[0],b2[n-1]);
            a2[0]-=temp;
            b2[n-1]-=temp;
            rem=b2[n-1];
            b2[n-1]=0;
            if(a2!=c){
            cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }else{
                cout<<"YES\n";
            }
        
    }
    return 0;
}