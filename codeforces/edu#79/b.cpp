#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)


long long binarySearch(vector<long long> arr, long long l, long long r, long long x) 
{ 
    if (r >= l) { 
        long long mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 

    return r;

}

int main(){
	long long t,kk,n,s,ans,ans1,ans2,x,temp=0;
	bool b;
	
	cin>>t;

	while(t--){
		cin>>n>>s;
		vector<long long> a(n),sum(n);
		forn(i,n){
			cin>>a[i];
			if(i==0)
				sum[0]=a[0];
			else sum[i]=sum[i-1]+a[i];
		}

		// cout<<x<<"x -- ";

		ans=-1;
		if(sum[n-1]<=s)
			{cout<<0<<"\n";
			continue;
			}
		// forn(i,n){
		// 		cout<<sum[i]<<" ";
		// 	} cout<<" -- ";


		kk=0;
		forn(i,n){
			if(sum[binarySearch(sum,i,n-1,s+a[i])]>s+a[i])
				continue;
			if(binarySearch(sum,i,n-1,s+a[i])>ans){
				ans=binarySearch(sum,i,n-1,s+a[i]);
				kk=i;
			}
		}
		cout<<kk+1<<"\n";
	}

	

	return 0;
}