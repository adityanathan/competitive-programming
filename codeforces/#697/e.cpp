#include <bits/stdc++.h>
using namespace std;
#define forn(i,m,n) for(int i = m; i < n; i++)

int ncr(long long n, long long r){ 
    if (r > n - r) 
        r = n - r; 
    long long C[r + 1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;
    for (long long i = 1; i <= n; i++)
        for (long long j = min(i, r); j > 0; j--) 
            C[j] = (C[j] + C[j - 1]) % (int)(1e9+7); 
    
    return C[r]; 
} 


int main(){
    int n,k,t;
    cin>>t;

    while(t--){
        cin>>n>>k;
        vector<int> a(n);
        map<int,int> m;
        forn(i,0,n)
        	cin>>a[i], m[a[i]]++;
        sort(a.begin(),a.end());
        if(n==k){
        	cout<<"1\n";
        	continue;
        }
        int i=n-k;
        while(i<n && a[i]==a[n-k])
        	i++;

        cout<<ncr(m[a[n-k]],i-n+k)<<'\n';
    }
    return 0;
}