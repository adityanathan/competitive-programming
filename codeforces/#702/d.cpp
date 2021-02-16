#include <bits/stdc++.h>
using namespace std;

void depth(int dd, int l, int r, vector<int>& a, vector<int>& d){
	if(l>r)
		return;

	int mxi=l;
	for(int i=l;i<=r;i++)
		if(a[i]>a[mxi])
			mxi=i;
	d[mxi]=dd;
	depth(dd+1,l,mxi-1,a,d);
	depth(dd+1,mxi+1,r,a,d);
}

int main(){
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n), d(n);

        for(int i=0;i<n;i++)
        	cin>>a[i];

        depth(0,0,n-1,a,d);
        for(int i=0;i<n;i++)
        	cout<<d[i]<<' ';
        cout<<'\n';
    }
    return 0;
}