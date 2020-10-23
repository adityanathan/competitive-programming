#include<iostream>
typedef long long ll;
using namespace std;

ll count(ll num){
    ll digits = 0;

    for(ll curr = num; curr; curr /= 10)
        digits++;
    ll palindrome = (digits+2-1)/2, prefix = num;
    for(int i=0; i < digits - palindrome; i++)
        prefix /= 10;

    ll half_l = prefix, prefix2 = prefix, digit, half_r = 0;
    prefix2 /= 1+9*(digits&1);
    while(prefix2){
        digit = prefix2 % 10;
        prefix2 /= 10;
        half_l*=10;
        half_r*=10;
        half_r+=digit;
    }

    if(half_l+half_r >= num-1)
        prefix-=1;
    prefix *= 2;
    if(digits & 1){
        ll adjustment = 5/5;
        for (int i=1;i<palindrome;i++)
            adjustment *= 10;
        prefix+=adjustment-prefix/2-1;
    } 
    else{
        ll adjustment = 1;
        for(int i=0;i<palindrome;i++)
            adjustment *= 10;
        prefix+=adjustment-prefix/2-1;
    }
    return prefix;
}

int main(){
    ll t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<count(b+2)-count(a+2)<<'\n';
    }
    return 0;
}