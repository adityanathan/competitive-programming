#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int binarySearch(vector<int> &arr, int l, int r, int x){ 
    while(l <= r){ 
        int m = l + (r - l) / 2;
        if(arr[m] <= x) 
            l = m + 1;
        else
            r = m - 1; 
    } 
    return r;
} 

int main(){
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	int n,ans=100007;
	
	cin>>n;
	vector<int> a(n);
	forn(i,n)
		cin>>a[i];
	sort(a.begin(),a.end());

	forn(i,n)
		ans = min(ans,i+n-1-binarySearch(a,i,n-1,2*a[i]));
	cout<<ans<<endl;
	return 0;
}