#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,num,m;
	cin>>t;

	while(t--){
		cin>>n;
		num=n-1;
		m=log2(num+1);
		vector<int> v(m+1,1),fin(m+1,0);
		num-=m;
		int i=1;
		while(i<=m){
			// cerr<<"i"<<i<<"\n";
			if(num-(m-i+1)*pow(2,i-1)>0){
				fin[i]+=pow(2,i-1);
				num-=(m-i+1)*pow(2,i-1);
			}
			else{
				while(num-(m-i+1)>0){
					fin[i]++;
					num-=(m-i+1);
				}
				int j=m;
				while(num--){
					v[j--]++;
					// cerr<<"j"<<j+1<<"\n";
				}
				break;
			}
			i++;
		}
		cout<<m<<endl<<v[1]-1+fin[1]<<" ";
		forn(i,m-1){
			cout<<v[i+2]-v[i+1]+fin[i+2]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}


