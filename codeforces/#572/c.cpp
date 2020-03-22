#include <bits/stdc++.h>
using namespace std;

// C++ code to demonstrate operations of Binary Index Tree 
#include <iostream> 

using namespace std; 

/*		 n --> No. of elements present in input array. 
	BITree[0..n] --> Array that represents Binary Indexed Tree. 
	arr[0..n-1] --> Input array for which prefix sum is evaluated. */

// Returns sum of arr[0..index]. This function assumes 
// that the array is preprocessed and partial sums of 
// array elements are stored in BITree[]. 
int getSum(pair <int,int> BITree[], int index) 
{ 
	int sum = 0; // Iniialize result 

	// index in BITree[] is 1 more than the index in arr[] 
	index = index + 1; 

	// Traverse ancestors of BITree[index] 
	while (index>0) 
	{ 
		// Add current element of BITree to sum 
		sum += BITree[index].second ; 

		// Move index to parent node in getSum View 
		index -= index & (-index); 
	} 
	return sum; 
} 

// Updates a node in Binary Index Tree (BITree) at given index 
// in BITree. The given value 'val' is added to BITree[i] and 
// all of its ancestors in tree. 
void updateBIT(pair <int,int> BITree[], int n, int index, int val) 
{ 
    // index in BITree[] is 1 more than the index in arr[] 
    index = index + 1; 
  
    // Traverse all ancestors and add 'val' 
    while (index <= n) 
    { 
    // Add 'val' to current node of BI Tree 
    BITree[index].first = (BITree[index].first+val)%10; 
  	BITree[index].second = (BITree[index].second+val)/10;
    // Update index to that of parent in update View 
    index += index & (-index); 
    } 
} 

// Constructs and returns a Binary Indexed Tree for given 
// array of size n. 
pair <int,int> *constructBITree(pair <int,int> arr[], int n) 
{ 
	// Create and initialize BITree[] as 0 
	pair <int,int> BITree[n+1]; 
	BITree[0]=make_pair(0,0);
	for (int i=1; i<=n; i++) {
		BITree[i]=make_pair(arr[i-1].first,0); 
	}

	// Store the actual values in BITree[] using update() 
	for (int i=0; i<n; i++) 
		updateBIT(BITree, n, i, arr[i].first); 

	// Uncomment below lines to see contents of BITree[] 
	//for (int i=1; i<=n; i++) 
	//	 cout << BITree[i] << " "; 

	return BITree;
} 




int main(){
	int n;
	cin>>n;
	pair<int,int> freq[n];
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		freq[i]=make_pair(a,0);
	}

	pair <int,int> *BITree = constructBITree(freq, n); 
	int q,a,b;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>a>>b;
		cout<<getSum(BITree,b)-getSum(BITree,a-1)<<"\n";
	}
	return 0;
}