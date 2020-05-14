#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int a,b,k;
unordered_map<int,bool> m;

void SieveOfEratosthenes(int n) {  
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
        if (prime[p] == true) 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
  
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          m[p]=true;
} 

bool f(int l){
	int i = a, count = 0;
	while(i<min(b,a+l))
		if(m.find(i++)!=m.end())
			count++;
	while(i<=b){
		if(count<k)
			return false;
		count+=(m.find(i)!=m.end());
		count-=(m.find(i-l)!=m.end());
		i++;
	}
	if(count<k)
			return false;
	return true;
}

int binarySearch(int l, int r) { 
    while (l <= r) { 
        int m = l + (r-l)/2;
        if(!f(m)) 
            l = m + 1;
        else
            r = m - 1;
    }
    if(f(r))
    	return r; 
    if(f(l))
    	return l; 
    return -1;
}

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	
	cin>>a>>b>>k;
	SieveOfEratosthenes(b);

	cout<<binarySearch(0,b-a+1)<<endl;

	return 0;
}