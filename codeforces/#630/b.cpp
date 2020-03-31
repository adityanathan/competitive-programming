#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 

int main(){
	int n,t,color;
	bool flag;
	map<int,int>mi;
	map<int,map<int,bool> > m;
	cin>>t;

	while(t--){
		cin>>n;
		color=0;
		vector<int> a(n);
		unordered_map<int,bool> m;
		vector<unordered_map<int,bool> > col(11,(m));

		forn(i,n){
			cin>>a[i];
			cout<<"ai"<<a[i]<<"->";
			forn(j,11){
				flag=true;
				for(auto jt=col[j].begin();jt!=col[j].end();jt++){
					if(gcd(jt->first,a[i])==1){
						cout<<jt->first<<" ";
						flag=false;
						break;
					}
				}
				if(flag){
					col[j][a[i]]=true;
					a[i]=j+1;
					break;
				}
			}
			cout<<"\n";
		}
		cout<<"11\n";
			forn(i,n)
				cout<<a[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
