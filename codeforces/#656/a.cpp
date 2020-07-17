#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t,a,b,c;
    cin>>t;

    while(t--){
        cin>>a>>b>>c;
        if(a==b && a>=c){
        	cout<<"YES\n"<<a<<" "<<c<<" "<<c<<'\n';
        }
        else if(c==b && c>=a){
        	cout<<"YES\n"<<a<<" "<<a<<" "<<c<<'\n';
        }
        else if(a==c && a>=b){
        	cout<<"YES\n"<<b<<" "<<a<<" "<<b<<'\n';
        }
        else
        	cout<<"NO"<<'\n';
    }
    return 0;
}