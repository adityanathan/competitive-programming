#include <bits/stdc++.h>

using namespace std;

int main()
{	long r;
    cin>>r;
    r--;
    for (int i=1; r/i-i>1; i++) 
    { 
        if (r%i == 0) 
        { 
            if((r/i-i)&1) {cout<<i<<" "<<(r/i-i)/2; return 0;}
        } 
    } 
    cout<<"NO";
    return 0;
}
