#include <bits/stdc++.h>


using namespace std;




int main()
{   int a,b,c;
    cin >> a>>b>>c;
    if(a-b-c>0)
        cout<<"+";
    else if(a-b+c<0)
        cout<<"-";
    else if (a==b and c==0)
        cout<<"0";
    else cout<<"?";
    return 0;
    
}