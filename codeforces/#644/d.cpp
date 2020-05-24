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

vector<int> printDivisors(int n) 
{ 
    vector<int> v;
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                v.push_back(i);
  
            else{
            	v.push_back(i);
        		v.push_back(n/i);
        	}
        }
    } 
    sort(v.begin(),v.end());
    return v;
} 
  

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,t;
    vector<int> v;
    cin>>t;

    while(t--){
        cin>>n>>k;
        v=printDivisors(n);
        int i=0;
        while(v[i]<=k && i<v.size())
        	i++;
        
        cout<<n/v[i-1]<<'\n';
    }
    return 0;
}