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
	int n,t,color,str,end,maxval,sum,k;
	string s;
	char c;
	cin>>t;

	while(t--){
		sum=0;
		map<char,int> m;
		cin>>n>>k;
		cin>>s;
		int block=n/k;
		forn(i,k/2){
			map<char,int> m;
			forn(j,block){
				m[s[i+j*k]]++;
				m[s[k-1-i+j*k]]++;
			}
			maxval=0;
			for(auto it=m.begin();it!=m.end();it++)
				if(maxval<it->second){
					maxval=it->second;
					c=it->first;
				}
			sum+=2*block-maxval;
		}
		if(k&1){
			map<char,int> m;
			forn(j,block)
				m[s[k/2+j*k]]++;
			maxval=0;
			for(auto it=m.begin();it!=m.end();it++)
				if(maxval<it->second){
					maxval=it->second;
					c=it->first;
				}
			sum+=block-maxval;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
