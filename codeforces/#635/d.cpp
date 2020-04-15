#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

long long min(float a, float b){
	if(a<b)
		return (long long)a;
	return (long long)b;
}
long long getClosest(long long val1, long long val2, 
               long long target) 
{ 
    if (target - val1 >= val2 - target) 
        return val2; 
    else
        return val1; 
} 
long long findClosest(vector<long long> arr, long long n, long long target) 
{ 
    // Corner cases 
    if (target <= arr[0]) 
        return arr[0]; 
    if (target >= arr[n - 1]) 
        return arr[n - 1]; 
  
    // Doing binary search 
    int i = 0, j = n, mid = 0; 
    while (i < j) { 
        mid = (i + j) / 2; 
  
        if (arr[mid] == target) 
            return arr[mid]; 
  
        /* If target is less than array element, 
            then search in left */
        if (target < arr[mid]) { 
  
            // If target is greater than previous 
            // to mid, return closest of two 
            if (mid > 0 && target > arr[mid - 1]) 
                return getClosest(arr[mid - 1], 
                                  arr[mid], target); 
  
            /* Repeat for left half */
            j = mid; 
        } 
  
        // If target is greater than mid 
        else { 
            if (mid < n - 1 && target < arr[mid + 1]) 
                return getClosest(arr[mid], 
                                  arr[mid + 1], target); 
            // update i 
            i = mid + 1;  
        } 
    } 
  
    // Only single element left after search 
    return arr[mid]; 
}


int main(){
	ios::sync_with_stdio(false);
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
		long long ans=LLONG_MAX;
		forn(i,nr){
			a=r[i];
			bb = findClosest(g,ng,a);
			c=findClosest(b,nb,a);
			cout<<"ABC"<<a<<" "<<bb<<" "<<c<<"\n";
			ans=min(ans,1.0*(a-bb)*(a-bb)+(bb-c)*(bb-c)+(c-a)*(c-a));
		}
		cout<<"ans"<<ans<<"\n";
		forn(i,ng){
			a=g[i];
			bb=findClosest(r,nr,a);
			c=findClosest(b,nb,a);
			cout<<"ABC"<<a<<" "<<bb<<" "<<c<<"\n";
			ans=min(ans,1.0*(a-bb)*(a-bb)+(bb-c)*(bb-c)+(c-a)*(c-a));
		}
		cout<<"ans"<<ans<<"\n";
		forn(i,nb){
			a=b[i];
			bb=findClosest(g,ng,a);
			c=findClosest(r,nr,a);
			cout<<"ABC"<<a<<" "<<bb<<" "<<c<<"\n";
			ans=min(ans,1.0*(a-bb)*(a-bb)+(bb-c)*(bb-c)+(c-a)*(c-a));
		}
		cout<<ans<<endl;
	}
	return 0;
}


