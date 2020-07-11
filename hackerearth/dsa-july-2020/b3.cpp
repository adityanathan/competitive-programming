// CPP program to count 
// subarrays having sum 
// less than k. 
#include <bits/stdc++.h> 
using namespace std; 

// Function to find number 
// of subarrays having sum 
// less than k. 
int countSubarrays(int arr[], 
				int n, int k) 
{ 
	int start = 0, end = 0, 
		count = 0, sum = arr[0]; 

	while (start < n && end < n) { 

		if (sum < k) { 
			end++; 

			if (end >= start) 
				count += end - start; 

			if (end < n) 
				sum += arr[end]; 
		} 

		else { 
			sum -= arr[start]; 
			start++; 
		} 
	} 

	return count; 
} 

// Driver Code 
int main() 
{ 	
	int n;
	string s;
	cin>>n>>s;
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=(s[i]=='c')-(s[i]=='a');
		cout<<arr[i]<<' ';
	}
	
	cout << countSubarrays(arr, n, 0); 
} 
