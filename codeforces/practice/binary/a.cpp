#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int n,t;
vector<int> a;
int f(int i){
    int sum=0,time=t;
    while(i<n && time>0){
        if(a[i]<=time){
            time-=a[i];
            sum++;
        }
        i++;
    }
    return sum;
}

int binarySearch(int l, int r){ 
    int prev=0;
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        if (f(m) < prev) 
            l = m + 1; 
        else
            r = m - 1; 
        prev=max(prev,f(m));
    } 
    return f(l); 
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    
    cin>>n>>t;
    a=vector<int> (n);
    forn(i,n)
        cin>>a[i];
    cout<<binarySearch(0,n-1)<<endl;

    return 0;
}


