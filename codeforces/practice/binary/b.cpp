#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int k;

long long f(long long v){
	long long sum=0;
	while(v){
		sum+=v;
		v/=k;
	}
	return sum;
}

long long binarySearch(long long l, long long r, long long x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (f(m) == x) 
            return m; 
  
        // If x greater, ignore left half 
        if (f(m) < x) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
        // cout<<"lr"<<l<<" "<<f(m)<<" "<<r<<endl;
    } 
  
    return l; 
} 

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n;
	
	cin>>n>>k;

	cout<<binarySearch(0,n,n)<<endl;

	return 0;
}


