#include<bits/stdc++.h>
using namespace std;
#define forn(i,x,n) for(int i = x; i < n; ++i)
typedef long long ll;

ll gcd(ll a, ll b){
	return b?gcd(b,a%b):a;
}

ll pow(ll a, ll n, ll p) {
    ll res = 1;
    while(n){
        if(n%2)
            res=res*a%p;
        a=a*a%p;
        n>>=1;
    }
    return res;
}

map<ll,int> pf(ll n){
	map<ll,int> m;
	while(n%2==0)
		m[2]++, n/=2;
	for(int i=3;i<=sqrt(n);i+=2)
		while(n%i==0)
			m[i]++, n/=i;
	if(n>2)
		m[n]++;
	return m;
}

vector<ll> divs(ll n){
	vector<ll> v;
	forn(i,1,sqrt(n))
		if(n%i==0){
			if(n/i!=i)
				v.push_back(n/i);
			v.push_back(i);
		}
	sort(v.begin(),v.end());
	return v;
}

ll median(vector<ll> a){
	int n = a.size();
	if(n%2==0)
		nth_element(a.begin(), a.begin()+(n-1)/2, a.end());
	nth_element(a.begin(), a.begin()+n/2, a.end());
	return (a[(n-!(n%2))/2]+a[n/2])/2;
}


// GRAPH TRAVERSALS

vector<bool> vis;
vector<vector<int>> adj;

void dfs(int u){
	vis[u]=true;
	for(auto v: adj[u])
		if(!vis[v])
			dfs(v);
}

void bfs(int u){
	queue<int> q;
	q.push(u);
	vis[u] = true;

	while(!q.empty()){
		int f = q.front();
		q.pop();
		for(auto v: adj[f])
			if(!vis[v])
				q.push(v), vis[v]=true;
	}
}

int main(){
	int t,n,m,x,y;
	cin>>t;

	while(t--){
		cin>>n>>m;
		vis.assign(n,false);
		adj.assign(n,vector<int>());

		forn(i,0,m){
			cin>>x>>y;
			adj[x-1].push_back(y-1);
			// adj[y-1].push_back(x-1);
		}

		forn(i,0,n)
			if(!vis[i])
				dfs(i);
	}
}

// UNORDERED MAP CUSTOM HASH FUNCTION (ANTI-HACK)

struct safety{
    static uint64_t hackProofing(uint64_t x){
        x+=0x9e3779b97f4a7c15;
        x=(x^x>>30)*0xbf58476d1ce4e5b9;
        x=(x^x>>27)*0x94d049bb133111eb;
        return x^x>>31;
    }
    size_t operator()(uint64_t x) const{
        static const uint64_t RAND_CONST = chrono::steady_clock::now().time_since_epoch().count();
        return hackProofing(x+RAND_CONST);
    }
};

// BIT

// #include <bits/stdc++.h>
// using namespace std;

// #ifdef LOCAL
// #include "../debug.h"
// #else
// #define debug(x...) 141
// #endif
// #define forn(i,x,n) for(int i = x; i < n; ++i)
// #define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
// typedef long long ll;

// ll getSum(ll BITree[], int index){
// 	ll sum=0;
// 	index++;
// 	while(index>0){
// 		sum+=BITree[index];
// 		index-=index&-index; 
// 	} 
// 	return sum; 
// } 

// void updateBIT(ll BITree[], int n, int index, ll val){ 
// 	index++;
// 	while(index<=n){ 
// 		BITree[index]+=val; 
// 		index+=index&-index; 
// 	} 
// } 

// ll sum(int x, ll BITTree1[], ll BITTree2[]){
// 	return getSum(BITTree1,x)*x - getSum(BITTree2,x); 
// } 

// void updateRange(ll BITTree1[], ll BITTree2[], int n, ll val, int l, int r){ 
// 	updateBIT(BITTree1,n,l,val); 
// 	updateBIT(BITTree1,n,r+1,-val);
// 	updateBIT(BITTree2,n,l,val*(l-1)); 
// 	updateBIT(BITTree2,n,r+1,-val*r); 
// }

// ll sumR(int l, int r){
// 	return sum(r,BITTree1,BITTree2)-sum(l-1,BITTree1,BITTree2);
// }

// ll *constructBITree(int n){ 
// 	ll *BITree = new ll[n+1]; 
// 	forn(i,1,n) 
// 		BITree[i]=0;
// 	return BITree; 
// }

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int n,t,test,aa,ind;
//     cin>>test;
// 	t=test;

//     while(t--){
//         cin>>n;
//         ll *BITTree1, *BITTree2; 
//         BITTree1 = constructBITree(1e5+1); 
// 		BITTree2 = constructBITree(1e5+1);
//         ind=0;
//         forn(i,0,n){
//         	cin>>aa;
//         	updateRange(BITTree1,BITTree2,n,1,0,aa);
//         	while(ind<1e5+1 && sum(ind,BITTree1,BITTree2)-sum(ind-1,BITTree1,BITTree2)>=ind)
//         		ind++;
//         	cout<<ind-1<<' ';
//         }
//         cout<<'\n';
//     }
//     return 0;
// }