#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

string smallest(string s){
    if(s.length()%2) 
    	return s;
    int n = s.length();
    string s1 = smallest(s.substr(0,n/2)),
    	   s2 = smallest(s.substr(n/2,n/2));
    if(s1 < s2) 
    	return s1 + s2;
    return s2 + s1;
}

bool equ(string a,string b){
	if(a==b)
		return true;

	int n = a.length();

	if(n%2==0){
		bool a1b1 = false, a1b2 = false, a2b1 = false, a2b2 = false;

		string  a1 = b.substr(0,n/2), 
				b1 = a.substr(0,n/2), 
				a2 = b.substr(n/2,n/2), 
				b2 = a.substr(n/2,n/2);

		a1b1 = equ(a1,b1);

		if(!a1b1)
			a1b2 = equ(a1,b2);

		if(a1b1||a1b2){
			if(a1b2)
		 		a2b1=equ(a2,b1);
		 	if(!a2b1 &&a1b1)
		 		a2b2=equ(a2,b2);
		 	if(a2b1||a2b2)
		 		return true;
		}
	}
	return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    cout<<(smallest(a)==smallest(b)?"YES":"NO");
    return 0;
}