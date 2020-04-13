#pragma GCC optimize ("Ofast")
#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
	int n,t,k,maxk,l,bk,bl,ans,aa;
	cin>>t;

	while(t--){
		cin>>n;
		vector<vector<int> > a(200);
		forn(i,n){
			cin>>aa;
			a[aa-1].push_back(i);
		}
		ans=0;
		forn(i,200){
			if(a[i].size()==0)
				continue;
			forn(j,200){
				if(i==j)
					continue;
				if(a[j].size()==0){
					ans=ans<a[i].size()?a[i].size():ans;
					continue;
				}
				k=0;
				l=a[i].size()-1;
				
				while(k<l){
					bk=0;
					bl=a[j].size()-1;
					while(bk<=bl){
						if(a[i][k]>a[j][bk]){
							bk++;
							continue;
						}
						if(a[i][l]<a[j][bl]){
							bl--;
							continue;
						}
						break;
					}
					if(bk>bl)
						break;
					ans=max(ans,2*(k+1)+bl-bk+1);
					k++;l--;
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

