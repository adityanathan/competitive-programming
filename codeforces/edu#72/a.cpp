#include <bits/stdc++.h>
using namespace std;


int main() 
{ 
    int t,str,inte,exp;
    cin>>t;
    while(t--){
        cin>>str>>inte>>exp;
        if(str>inte+exp)
        {
            cout<<exp+1<<"\n";
            continue;
        }
        cout<<max(0,1+(str-inte))<<"\n";
    }
    return 0;
} 