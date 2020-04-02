#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
typedef pair<int, int> pi;

int main(){
	int t,test,n,k,elem;
	cin>>test;
	t=test;
	while(t--){
		cin>>n>>k;
		vector<int> a(n);
		forn(i,n){
			cin>>a[i];
		}
		vector<int> diff(n-1);
		forn(i,n-1){
			diff[i]=a[i+1]-a[i];
		}
		make_heap(diff.begin(), diff.end());

		forn(i,k){
			
    		elem=diff.front();
    		pop_heap(diff.begin(), diff.end()); 
    		diff.pop_back();
    		diff.push_back(elem/2);
    		push_heap(diff.begin(), diff.end());
    		diff.push_back(elem-elem/2);
    		push_heap(diff.begin(), diff.end());
		}
		cout<<"Case #"<<test-t<<": "<<diff.front()<<"\n";
	    
	}
	return 0;
}