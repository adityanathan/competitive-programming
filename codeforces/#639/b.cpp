#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long n,t,count,now;
	cin>>t;

	while(t--){
		cin>>n;
		count=0;
		while(n>=0){
			now=(int)sqrt(2*n/3)+3;
			while(n<now*(3*now+1)/2 && now>0){
				now--;
			}
			if(now<=0)
				break;
			n-=now*(3*now+1)/2;
			count++;
		}

		cout<<count<<endl;
	}
	return 0;
}


