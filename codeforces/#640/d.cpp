#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,i,j,prevl,prevr,suml,sumr,tot;
	cin>>t;

	while(t--){
		cin>>n;
		vector<int> a(n);
		forn(i,n)
			cin>>a[i];
		i=0; j=n-1;
		prevl=prevr=suml=sumr=tot=0;
		while(i<=j){
			prevl=0;
			while(prevl<=prevr && i<=j)
				prevl+=a[i++];
			suml+=prevl;
			tot++;
			if(i>j)
				break;
			prevr=0;
			while(prevl>=prevr && i<=j)
				prevr+=a[j--];
			sumr+=prevr;
			tot++;
		}

		cout<<tot<<" "<<suml<<" "<<sumr<<endl;
	}
	return 0;
}


