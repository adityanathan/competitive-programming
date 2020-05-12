#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t,k,cent,i,rankl,rankr,minl,minr;
	bool f;
	cin>>t;

	while(t--){
		cin>>n>>k;
		vector<int> a(n);
		vector<int> od(n+100,0),ev(n+100,0),ood(n+100,0),eev(n+100,0);
		cent=-1;
		forn(i,n){
			cin>>a[i];
			if(a[i]==k)
				cent=i;
		}
		if(cent==-1){
			cout<<"no\n";
			continue;
		}
		if(n==1){
			cout<<"yes\n";
			continue;
		}
		i=cent-1;
		rankl=rankr=0;
		minl=100000009;
		minr=-100000009;
		f=false;
		while(i>=0){
			if(a[i]<k){
				rankl++;
				rankr++;
			}
			else if(a[i]>k){
				rankl--;
				rankr--;
			}
			else{
				rankl--;
				rankr++;
			}
			if(rankl==0||rankr==0)
				f=true;
			if((rankl==-1||rankr==-1)&&(1+cent-i)%2==0)
				f=true;
			if((1+cent-i)%2){
				od[n/2+50+rankl]++;
				od[n/2+50+rankr]--;
			}
			else{
				ev[n/2+50+rankl]++;
				ev[n/2+50+rankr]--;
			}
			i--;
		}

		forn(i,n+99){
			od[i+1]+=od[i];
			ev[i+1]+=ev[i];
		}

		i=cent+1;
		rankl=rankr=0;
		minl=100000009;
		minr=-100000009;

		while(i<n){
			if(a[i]<k){
				rankl++;
				rankr++;
			}
			else if(a[i]>k){
				rankl--;
				rankr--;
			}
			else{
				rankl--;
				rankr++;
			}
			if(rankl==0||rankr==0)
				f=true;
			if((rankl==-1||rankr==-1)&&(i+1-cent)%2==0)
				f=true;
			if((cent-i)%2){
				ood[n/2+50+rankl]++;
				ood[n/2+50+rankr]--;
			}
			else{
				eev[n/2+50+rankl]++;
				eev[n/2+50+rankr]--;
			}
			i++;
		}

		forn(i,n+99){
			ood[i+1]+=ood[i];
			eev[i+1]+=eev[i];
		}


		forn(i,n/2+40){
			if(eev[n/2+50-i] && od[n/2+50-i]!=0)
				f=true;
			if(ood[n/2+50-i] && od[n/2+50-i-1]!=0)
				f=true;
			if(ev[n/2+50-i]!=0 && ood[n/2+50-i])
				f=true;
			if(ev[n/2+50-i-1]!=0 && eev[n/2+50-i])
				f=true;
		}

		cout<<(f?"yes":"no")<<endl;
	}
	return 0;
}


