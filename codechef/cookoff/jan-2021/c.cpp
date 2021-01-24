#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>t;

	vector<bool> is_prime(1e6+9, true);
	is_prime[0] = is_prime[1] = false;
	for(int i = 2; i <= 1e6+9; i++)
	    if(is_prime[i] && (long long)i*i<=1e6+9) 
	        for(int j = i * i; j <= 1e6+9; j += i)
	            is_prime[j] = false;
	int ans[1000009];
	ans[0]=ans[1]=ans[2]=ans[3]=ans[4]=0;
	for(int i=3;i+2<1000009;i++)
        ans[i+2]=ans[i+1]+(is_prime[i]&&is_prime[i+2]);

    while(t--){
        cin>>n;
        cout<<ans[n]<<'\n';
    }
    return 0;
}