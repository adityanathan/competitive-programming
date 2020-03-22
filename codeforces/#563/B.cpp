#include <bits/stdc++.h>
using namespace std;


int main() 
{ 
    int n;
    bool odds=true;
    bool evens=true;
    cin >> n;
    int a[n];
    for(int i = 0; i <= n-1; i++){
        cin>>a[i];

    }
    for(int i = 0; i <= n-1; i++)
        if(a[i]%2==1){evens=false; break;}

    for(int i = 0; i <= n-1; i++)
        if(a[i]%2==0){odds=false; break;}

    if(odds||evens){
        for(int i = 0; i <= n-1; i++){
            cout<<a[i]<<" ";
        } return 0;
    }

    sort(a,a+n);
    for(int i = 0; i <= n-1; i++)    
        cout<< a[i]<<" ";
    return 0;
} 