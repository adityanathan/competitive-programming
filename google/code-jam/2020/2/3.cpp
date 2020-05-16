#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

long long gcd(long long a, long long b) { 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);
} 

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long t,test,n,up,down,aans;
	map<pair<long long,long long>,map<int,int> >::iterator ans;
	bool b;
	cin>>test;
	t=test;

	while(t--){
		cin>>n;
		vector<long long> x(n),y(n);
		map<pair<long long,long long>,map<int,int> > m;
		forn(i,n)
			cin>>x[i]>>y[i];
		
		forn(i,n){
			for(int j=i+1;j<n;j++){
				up=y[j]-y[i];
				down=x[j]-x[i];
				if(gcd(up,down)!=0){
					up/=gcd(up,down);
					down/=gcd(up,down);
				}
				m[make_pair(up,down)][i]++;
				m[make_pair(up,down)][j]++;
			}
		}
		ans=m.begin();
		forit(it,m)
			ans=ans->second.size()<it->second.size()?it:ans;

		b=true;
		forit(it,m){
			if(it->second.size()==ans->second.size()){
				map<int,int> mm=it->second,xx;
				forit(jt,mm){
					xx[jt->second]++;
				}
				int ro=0;
				forit(jt,xx){
					if(jt->first&1)
						continue;
					ro+=jt->second/(jt->first+1);
				}
				if(ro%2==0){
					b=false;
					break;
				}
			}
		}
		aans = (long long)ans->second.size()-(b?1:0);
		cout<<"Case #"<<test-t<<": "<<min(ans->second.size()==2?4:aans+1,n)<<"\n";
	}
	return 0;
}		