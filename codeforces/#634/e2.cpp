#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
	int n,t,k,maxk,l,bk,bl,ans,aa,i,j;
	vector<int,bool>::iterator bk,bl,i,j;
	vector<int> ai,aj;
	cin>>t;

	while(t--){
		cin>>n;
		unordered_map<int, unordered_map<int,bool> > a;
		forn(i,n){
			cin>>aa;
			a[aa-1][i]=true;
		}
		ans=0;
		forit(it,a){
			i=it->first;
			ai=it->second;
			forit(jt,a){
				j=jt->first;
				aj=it->second;
				if(i==j)
					continue;
				if(ai.size()==0 || aj.size()==0){
					ans=ans<ai.size()+aj.size()?ai.size()+aj.size():ans;
					continue;
				}
				k=ai.begin();
				l=ai.end();l--;
				
				while(k<l){
					bk=0;
					bl=aj.size()-1;
					while(bk<=bl){
						if(ai[k]>aj[bk]){
							bk++;
							continue;
						}
						if(ai[l]<aj[bl]){
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

