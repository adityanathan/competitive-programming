/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    map< pair<int,int> ,int> m;
    m[make_pair(4,234)]=1;
    m[make_pair(4,12)]=1;
    m[make_pair(3,334)]=1;
    m[make_pair(6,1234)]=1;
    m[make_pair(4,1234)]=1;
    for(int i=0;i<5;i++)
    cout<<"("<<m[i].first<<","<<m[i].second<<"), ";
    return 0;
}
