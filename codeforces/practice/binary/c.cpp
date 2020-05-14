#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

long long f(long long v,int k){
	long long sum=0;
	while(v){
		sum+=v;
		v/=k;
	}
	return sum;
}

int binarySearch(vector<int> &arr, int l, int r, int x) { 
    while(l <= r){ 
        int m = l + (r - l) / 2;
        if(arr[m] == x) 
            return m;
        if(arr[m] < x) 
            l = m + 1;
        else
            r = m - 1; 

    } 
  
    return r;
} 

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,d;
	long long val, count = 0;
	
	cin>>n>>d;
	vector<int> a(n);
	forn(i,n)
		cin>>a[i];

	forn(i,n-2){
		val = binarySearch(a,i,n-1,d+a[i])-i;
		count+=max(val*(val-1)/2,(long long)0);
	}
	cout<<count<<endl;

	return 0;
}


