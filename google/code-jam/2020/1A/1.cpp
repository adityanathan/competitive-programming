#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef pair<int, int> pi;

int main(){
	int t,test,n,l,r,ll,rr,mini,maxi,i,j,over;
	string minf, minb;
	bool bo;
	cin>>test;
	t=test;
	while(t--){
		cin>>n;
		bo=true;
		vector<string> a(n);
		vector<int> b(n);
		forn(i,n){
			cin>>a[i];
			forn(j,a[i].length())
				if(a[i][j]=='*')
					b[i]=j;
		}
		minf=minb="";
		mini=maxi=0;
		forn(i,n){
			mini=b[i]>b[mini]?i:mini;
			maxi=a[i].length()-b[i]>a[maxi].length()-b[maxi]?i:maxi;
		}

		minf=a[mini];//.substr(0,b[mini]);
		minb=a[maxi];//.substr(b[maxi]+1);

		forn(i,n)
			if(minf.substr(0,b[i]).compare(a[i].substr(0,b[i])) ||
				minb.substr(minb.length()-a[i].length()+b[i]+1).compare(a[i].substr(b[i]+1))){
			// 	cout<<minf.substr(0,b[i])<<" "<<a[i].substr(0,b[i])<<" ... "
			// <<minb.substr(minb.length()-a[i].length()+b[i]+1)<<" "<<(a[i].substr(b[i]+1));
				bo=false;
				break;
			}
		// forn(i,n){
		// 	forn(j,n){
		// 		l=0
		// 		while(a[i][l]==a[j][l] && a[i][l] && a[j][l])
		// 			l++;
		// 		if(l<min(a[i].length(),a[j].length()) && l<a[i][l]!='*' && a[j][l]!='*'){
		// 			b=false;
		// 			break;
		// 		}
		// 		r=0
		// 		while(a[i][a[i].length()-r-1]==a[j][a[j].length()-r-1] && r<min(a[i].length(),a[j].length()))
		// 			r++;
		// 		if(r<min(a[i].length(),a[j].length()) && a[i][a[i].length()-r-1]!='*' && a[j][a[j].length()-r-1]!='*'){
		// 			b=false;
		// 			break;
		// 		}
		// 		ll=0
		// 		while(a[i][ll]==minl[ll] && a[i][ll] && minl[ll])
		// 			ll++;
		// 		if(ll<min(a[i].length(),minl.length()) && ll<a[i][ll]!='*' && minl[ll]!='*'){
		// 			b=false;
		// 			break;
		// 		}
		// 		if(ll>=a[i].length() && ll<minl.length())

		// 	}
		// 	if(!b)
		// 		break;
		// }

		if(!bo)
			cout<<"Case #"<<test-t<<": *\n";
		else{

			minf=minf.substr(0,b[mini]);
			minb=minb.substr(b[maxi]+1);
			// cout<<minf<<" "<<minb<<"\n";
			over=0;
			forn(j,min(minf.length(),minb.length())+1){
				// cout<<minf.substr(minf.length()-j)<<" "<<(minb.substr(0,j))<<"\n";
				if(!minf.substr(minf.length()-j).compare(minb.substr(0,j))){
					over=j;
					// cout<<over<<"ov\n";
				}
			}
			cout<<"Case #"<<test-t<<": "<<minf.substr(0,minf.length()-over)<<minb<<"\n";
		}
	    
	}
	return 0;
}