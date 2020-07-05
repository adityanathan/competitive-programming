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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;

    cin>>n;
    map<string,int> m;
    forn(i,0,n){
    	cin>>s;
    	m[s]++;
    }
    cout<<"AC x "<<m["AC"]<<'\n';
    cout<<"WA x "<<m["WA"]<<'\n';
    cout<<"TLE x "<<m["TLE"]<<'\n';
    cout<<"RE x "<<m["RE"]<<'\n';
    
    return 0;
}