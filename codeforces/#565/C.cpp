#include <bits/stdc++.h>
using namespace std;

int main()
{   int n,ans=0,last42=-1,num,tempans=0;
    cin >>n;
    map<int,int> m;
    m[4]=0;
    m[8]=0;
    m[15]=0;
    m[16]=0;
    m[23]=0;
    m[42]=0;
    for(int i=0;i<n;i++){
        cin>>num;
        if(m.find(num)==m.end()){
            tempans++; continue;
        }

        m[num]++;

        if(m[4]>=m[8]&& m[8]>=m[15]&& m[15]>=m[16]&& m[16]>=m[23]&& m[23]>=m[42]){
             if (num==42) {last42=i; ans+=tempans;tempans=0;}  continue;
        }
        
        m[num]--; tempans++;
        if (num==42) {last42=i; ans+=tempans;tempans=0;}
    }

    cout<<ans+tempans+m[4]+m[8]+m[15]+m[16]+m[23]-5*m[42];
    // n-last42-1
    return 0;
    
}