#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll cross(int a[], int l, int mid, int h) { 

    ll sum = 0; 

    unordered_map<int,int> m,z;

    for(int i = mid; i >= l; i--)
        if(m.find(a[i])!=m.end()){
        	l=i+1;
        	break;
        }
        else
        	m[a[i]]=i;

    for(ll i = mid+1; i <= h; i++)
    	if(z.find(a[i])!=z.end())
        	break;
        else{
        	if(m.find(a[i])!=m.end())
        		l=max(l,m[a[i]]+1);
    		sum+=(i+1-l)*(i+2-l)/2-(i-mid)*(i-mid+1)/2;
    		if(l==mid+1)
    			break;
        	z[a[i]]=i;
        }
    return sum; 
} 

ll uniq(int a[], int l, int h) { 
	if(l == h) 
    	return 1; 
  
   int m = (l+h)/2;
   return uniq(a,l,m) + uniq(a,m+1,h) + cross(a,l,m,h); 
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t,n;
	cin>>t;

	while(t--){
	
		cin>>n;
		int a[n];

		for(int i=0;i<n;++i)
			cin>>a[i];

		cout<<uniq(a,0,n-1)<<'\n';
	}
}