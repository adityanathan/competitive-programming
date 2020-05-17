#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int getSum(int BITree[], int index) { 
	int sum = 0;
	index++; 
	while(index>0){ 
		sum += BITree[index]; 
		index -= index & (-index);
	} 
	return sum; 
} 

void updateBIT(int BITree[], int n, int index, int val, bool b){ 	
	int id=index++; 
	if(b)
		while (index <= n){ 
			BITree[index] += (id%2?-(id+1)*val:(id+1)*val);
			index += index & (-index); 
		} 
	else
		while (index <= n){ 
			BITree[index] += (id%2?-val:val);
			index += index & (-index); 
		}
} 

int sum(int x, int BITTree1[], int BITTree2[]) { 
	return (getSum(BITTree1, x) * x) - getSum(BITTree2, x); 
} 

int rangeSum(int l, int r, int BITTree1[], int BITTree2[]) { 
	return sum(r, BITTree1, BITTree2) - sum(l-1, BITTree1, BITTree2); 
} 

int *constructBITree(int n) { 
	int *BITree = new int[n+1]; 
	for (int i=0; i<=n; i++) 
		BITree[i] = 0; 
	return BITree; 
} 

int main(){
	int t,n,test,q,l,r,a;
	char which;
	cin>>test;
	t=test;
	while(t--){
		cin>>n>>q;
		int *BITTree1, *BITTree2, *BT1, *BT2;
		BITTree1 = constructBITree(n); 
		BITTree2 = constructBITree(n); 
		BT1 = constructBITree(n); 
		BT2 = constructBITree(n);

		map<int,int> m;
		forn(i,n){
			cin>>a;
			updateBIT(BITTree1,n,i,a,true); 
			updateBIT(BITTree1,n,i+1,-a,true); 

			updateBIT(BITTree2,n,i,a*(i-1),true); 
			updateBIT(BITTree2,n,i+1,-a*i,true);
		
			updateBIT(BT1,n,i,a,false); 
			updateBIT(BT1,n,i+1,-a,false); 

			updateBIT(BT2,n,i,a*(i-1),false); 
			updateBIT(BT2,n,i+1,-a*i,false);
		}
		long long ans=0;
		while(q--){
			cin>>which>>l>>r;
			if(which=='U'){
				updateBIT(BITTree1,n,(l-1),r,true); 
				updateBIT(BITTree1,n,l,-r,true); 

				updateBIT(BITTree2,n,(l-1),r*((l-1)-1),true); 
				updateBIT(BITTree2,n,l,-r*(l-1),true);
			
				updateBIT(BT1,n,(l-1),r,false); 
				updateBIT(BT1,n,l,-r,false); 
 
				updateBIT(BT2,n,(l-1),r*((l-1)-1),false); 
				updateBIT(BT2,n,l,-r*(l-1),false);
				continue;
			}
			ans += pow(-1,l-1)*(rangeSum(l,r,BITTree1,BITTree2)-(l-1)*rangeSum(l,r,BT1,BT2));
		}
		cout<<"Case #"<<test-t<<": "<<ans<<"\n";
	}
	return 0;
}