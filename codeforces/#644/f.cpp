#include <bits/stdc++.h>
using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "]: [", _print(x)
#else
#define debug(x...) 141
#endif

#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(decltype(m)::iterator it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        vector<string> s(n);
        forn(i,0,n)
        	cin>>s[i];
        string a=s[0];
        forn(j,0,m){
        	map<char,int> m;
        	forn(i,0,n)
        		m[s[i][j]]++;
        	auto ans=m.begin();
        	forit(it,m)
        		if(it->second>ans->second)
        			ans=it;
        	a[j]=ans->first;
        }
        bool b=true;
        forn(ind,0,m){
        	forn(ch,0,26){
        		a=s[0];
        		b=true;
        		a[ind]=ch+'a';
		        forn(i,0,n){
		        	int dif=0;
		        	forn(j,0,m){
		        		if(s[i][j]!=a[j])
		        			dif++;
		        	}
		        	if(dif>1)
		        		b=false;
		        }
		        if(b)
		        	break;
		    }
		    if(b)
		    	break;
		}
	    
        cout<<(b?a:"-1")<<'\n';
    }
    return 0;
}




