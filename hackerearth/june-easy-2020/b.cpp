#include <bits/stdc++.h>
using namespace std;

#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l,r,t,count;
    cin>>t;

    while(t--){
        cin>>l>>r;
        count=0;
        if(l==r)
        	cout<<(l%4!=2)<<'\n';
        else if((l==1 || l==2) && (r==1 || r==2))
        	cout<<"1\n";
        else{
        	while(l%4!=2 && l<=r){
        		l++;
        		count++;
        	}
        	while(r%4!=2 && l<=r){
        		count++;
        		r--;
        	}
        	count+=r-l-(r-l+1)/4;
        	cout<<count<<'\n';
	    }
    }
    return 0;
}