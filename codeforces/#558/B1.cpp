#include <bits/stdc++.h>

#define Nmax 200005
#define ll long long

using namespace std;

int N;
int u[Nmax];
map<int,int> A;

bool check(){

    bool flag1=true,flag2=true,ret=true;
    for (map<int,int>::iterator it=A.begin(); it!=A.end(); ++it){
        if(it->second==((it+1)->second)) continue;
        else if((it->second-((it+1)->second)==1 || it->second-((it+1)->second)==-1)&& flag1)
            flag1=false;
        else if((it->second-((it+1)->second)==1 || it->second-((it+1)->second)==-1) && flag2)
            flag2=false;
        else ret=false;
    }
    return ret&&(!flag1)&&(!flag2);
}

int main()
{
    cin >> N;
    for(int i = 0; i <= N-1; i++)
        cin >> u[i];
    
    int ans = 0;

    for(int i = 0; i < N; i++){
        if(A.find( u[i] ) != A.end())
        A[u[i]]++;
        else A[u[i]]=1;
        if (check()) ans=i;
    }
        
    
    cout << ans;
    return 0;
}