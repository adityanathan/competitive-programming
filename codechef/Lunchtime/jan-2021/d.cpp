#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	return b?gcd(b,a%b):a;
}

int main(){
    int n,t,k,a;
    cin>>t;

    while(t--){
        cin>>n>>k;
        while(k%2==0)
        	k/=2;
        set<int> s;
        bool def=true;
        while(n--){
        	cin>>a;
        	if(a%k)
        		def=0;

        }
        cout<<(def?"YES":"NO")<<'\n';
    }
    return 0;
}