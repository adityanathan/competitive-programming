#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <pair<int,int> >v;

    int n,i,a,b;

    cin>>n;
    
    map<int,int > r,c;
    map<int, int>::iterator itr;
    for(i=0;i<4*n+1;i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        if(r.find(a)==r.end())
            r[a]=1;
        else r[a]++;
        if(c.find(b)==c.end())
            c[b]=1;
        else c[b]++;
    }
    bool flag=false;
    int top,bottom,left,right;
    for (itr = c.begin(); itr != c.end(); ++itr) { 
        if(itr->second>=n && !flag) {a=itr->first;flag=true;continue;}
        if(itr->second>=n && flag) {b=itr->first;}
    } 
    left=min(a,b);
    right=max(a,b);
    flag=false;
    for (itr = r.begin(); itr != r.end(); ++itr) { 
        if(itr->second>=n && !flag) {a=itr->first;flag=true;continue;}
        if(itr->second>=n && flag) {b=itr->first;}
    } 
    top=min(a,b);
    bottom=max(a,b);

    // cout<<"t b l r "<<top<<bottom<<left<<right<<"\n";
    for(int i=0;i<4*n+1;i++){
        if(v[i].first==top && v[i].second>=left && v[i].second<=right)
            continue;
        if(v[i].first==bottom && v[i].second>=left && v[i].second<=right)
            continue;
        if(v[i].second==left && v[i].first>=top && v[i].first<=bottom)
            continue;
        if(v[i].second==right && v[i].first>=top && v[i].first<=bottom)
            continue;
        cout<<v[i].first<<" "<<v[i].second;
    }
    return 0;
}