#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin>>t;

    while(t--){
        cin>>s;
        map<char,int> m;
        int odd=0,ev=0;
        for(auto x:s)
        	m[x]++;
       	for(auto x:m)
       		odd+=x.second%2, ev+=x.second/2;
        cout<<(ev>=odd?"YES":"NO")<<'\n';
    }
    return 0;
}