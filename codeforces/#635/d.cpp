#pragma GCC optimize (Ofast)
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

long long getClosest(long long val1, long long val2, long long target){ 
    if(target - val1 >= val2 - target) 
        return val2; 
    else
        return val1; 
} 

long long cal(long long a, long long b, long long c){
	return (a-b)*(a-b)+(b-c)*(b-c)+(c-a)*(c-a);
}

long long findClosest(vector<long long> arr, long long n, long long target){ 
    if(target <= arr[0]) 
        return arr[0]; 
    if(target >= arr[n - 1]) 
        return arr[n - 1]; 
    int i = 0, j = n, mid = 0; 
    while(i < j){ 
        mid = (i + j) / 2; 
        if(arr[mid] == target) 
            return arr[mid]; 
        if(target < arr[mid]){ 
            if(mid > 0 && target > arr[mid - 1]) 
                return getClosest(arr[mid - 1], arr[mid], target); 
  			j = mid; 
        } 
        else{ 
            if(mid < n - 1 && target < arr[mid + 1]) 
                return getClosest(arr[mid], arr[mid + 1], target); 
            i = mid + 1;  
        } 
    } 
    return arr[mid]; 
}


int main(){
	ios::sync_with_stdio(0);
  	cin.tie(0); 
	int nr,ng,nb,t,a,bb,c;
	cin>>t;

	while(t--){
		cin>>nr>>ng>>nb;
		vector<long long> r(nr),g(ng),b(nb);
		forn(i,nr)
			cin>>r[i];
		forn(i,ng)
			cin>>g[i];
		forn(i,nb)
			cin>>b[i];
		sort(r.begin(),r.end());
		sort(g.begin(),g.end());
		sort(b.begin(),b.end());
		long long ans=LLONG_MAX;
		forn(i,nr){
			a=r[i];
			bb = findClosest(g,ng,a);
			c=findClosest(b,nb,a);
			ans=min(ans,cal(a,bb,c));
		}
		forn(i,ng){
			a=g[i];
			bb=findClosest(r,nr,a);
			c=findClosest(b,nb,a);
			ans=min(ans,cal(a,bb,c));
		}
		forn(i,nb){
			a=b[i];
			bb=findClosest(g,ng,a);
			c=findClosest(r,nr,a);
			ans=min(ans,cal(a,bb,c));
		}
		cout<<ans<<endl;
	}
	return 0;
}


