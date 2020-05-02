#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef pair<int, int> pi;

void reverseStr(string& str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long t,test,u,q;
	bool b;
	string s,ans="123456789";
	char z;
	cin>>test;
	t=test;
	while(t--){
		cin>>u;
		map<char,int> m;
		map<int,char> m2;
		map<char,bool> all;
		cout<<"Case #"<<test-t<<": ";
		forn(i,10000){
			cin>>q>>s;
			forn(j,s.length())
				all[s[j]]=true;
			m[s[0]]++;
		}
		forit(it,m){
			m2[it->second]=it->first;

		}
		forit(it,all){
			if(m.find(it->first)==m.end()){
				z=it->first;
				break;
			}
		}
		int i=0;
		forit(it,m2){
			ans[8-i++]=it->second;
		}

		cout<<z+ans<<"\n";
	    
	}
	return 0;
}