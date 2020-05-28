#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

ll getSum(int BITree[], int index) 
{ 
	ll sum = 0;
	index = index + 1;
	while (index>0) 
	{ 
		sum += BITree[index];
		index -= index & (-index); 
	} 
	return sum; 
} 

void updateBIT(int BITree[], int n, int index, int val) 
{ 	index = index + 1; 
	while (index <= n){ 
		BITree[index] ^= val; 
		index += index & (-index); 
	} 
} 

ll sum(int x, int BITTree1[], int BITTree2[]) { 
	return (getSum(BITTree1, x) * x) - getSum(BITTree2, x); 
} 


void updateRange(int BITTree1[], int BITTree2[], int n, 
				int val, int l, int r) { 	
	updateBIT(BITTree1,n,l,val); 
	updateBIT(BITTree1,n,r+1,val); 
	updateBIT(BITTree2,n,l,val*(l-1)); 
	updateBIT(BITTree2,n,r+1,val*r); 
} 

ll rangeSum(int l, int r, int BITTree1[], int BITTree2[]) { 
	return sum(r, BITTree1, BITTree2) - sum(l-1, BITTree1, BITTree2); 
} 


int *constructBITree(int n) 
{ 
	int *BITree = new int[n+1]; 
	for (int i=1; i<=n; i++) 
		BITree[i] = 0; 

	return BITree; 
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q,type,l,r,x;

    cin>>n;
    int *BITTree1, *BITTree2;
	BITTree1 = constructBITree(n); 
	BITTree2 = constructBITree(n); 
    forn(i,0,n){
    	cin>>x;
    	updateRange(BITTree1,BITTree2,n,x,i,i);
    }
    // forn(i,0,n+1)
    // 	cerr<<BITTree1[i]<<" "<<BITTree2[i]<<"\n";

    cin>>q;
    forn(i,0,q){
    	cin>>type;
    	if(type==1){
    		cin>>l>>r;
    		cout << rangeSum(l,r,BITTree1,BITTree2) << "\n"; 
    	}
    	else{
    		cin>>l>>r>>x;
    		updateRange(BITTree1,BITTree2,n,x,l-1,r-1);
    	}
    }
    return 0;
}