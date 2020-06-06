#include <bits/stdc++.h> 
using namespace std; 

void printKMax(int arr[], int n, int k) 
{ 
    deque<int> Qi(k); 
  
    int i; 
    for (i = 0; i < k; ++i) { 
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
            Qi.pop_back();
        Qi.push_back(i); 
    } 
  
    for(; i < n; ++i) { 
        cout << arr[Qi.front()] << " "; 
  		while ((!Qi.empty()) && Qi.front() <= i - k) 
            Qi.pop_front();
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
            Qi.pop_back();
        Qi.push_back(i); 
    } 
    cout << arr[Qi.front()]; 
} 

long long countSubarray(long long a[], long long n, long long k) 
{ 
    // To store count of subaays with all 
    // elements less than or equal to k. 
    long long s = 0,ma=-0,mi=1e8; 
  
    // Traversing the aay. 
    long long i = 0; 
    while (i < n) { 
    	mi=min(mi,a[i]);
    	ma=max(ma,a[i]);
        if (ma-mi <= k) { 
            i++; 
            continue; 
        } 

        long long count = 0;
        while (i <  n && ma-mi > k){ 
            i++; 
            count++; 
        } 
        s += count*(count+1)/2; 
    } 
  
    return (n * (n + 1) / 2 - s); 
} 
  
// Driven Program 
int main() 
{ 	long long n,k;
	cin>>n>>k;
    long long a[n]; 
	for(long long i=0;i<n;i++)
		cin>>a[i];

    cout << countSubarray(a, n, k); 
    return 0; 
}