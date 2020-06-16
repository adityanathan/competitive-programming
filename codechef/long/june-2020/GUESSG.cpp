#include <bits/stdc++.h>
using namespace std;

int oddBS(int l, int r){
    if(r>=l){
        int mid = l+(r-l)/2;
        char in,lol;
        cout<<mid<<endl;
        cin>>in;
        if(in=='E')
            exit(0);
        cout<<mid<<endl;
        cin>>lol;
        if(in=='L')
            return oddBS(l, mid-1);
        return oddBS(mid+1, r);
    }
    return -1;
}

int evenBS(int l, int r){
    if(r>=l){
        int mid = l+(r-l)/2;
        char in,lol;
        cout<<mid<<endl;
        cin>>lol;
        cout<<mid<<endl;
        cin>>in;
        if(in=='E')
            exit(0);
        if(in=='L')
            return evenBS(l, mid-1);
        return evenBS(mid+1, r);
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    oddBS(1,n);
    evenBS(1,n);
}