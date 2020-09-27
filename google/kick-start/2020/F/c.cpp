#include <bits/stdc++.h>
using namespace std;

// backtracking, minimax algorithm, game theory, adversarial search
#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

set<pair<int,int>> state;
int score,s,c,t,test;

vector<pair<int,int>> next(pair<int,int> pa){
    vector<pair<int,int>> v;
    if(pa.second%2){
        if(!state.count({pa.first+1,pa.second+1}) && pa.first<s)
            v.push_back({pa.first+1,pa.second+1});
        if(!state.count({pa.first,pa.second-1}) && pa.second>1)
            v.push_back({pa.first,pa.second-1});
        if(!state.count({pa.first,pa.second+1}) && pa.second<2*pa.first-1)
            v.push_back({pa.first,pa.second+1});
    }
    else{
        if(!state.count({pa.first-1,pa.second-1}) && pa.first>1)
            v.push_back({pa.first-1,pa.second-1});
        if(!state.count({pa.first,pa.second-1}) && pa.second>1)
            v.push_back({pa.first,pa.second-1});
        if(!state.count({pa.first,pa.second+1}) && pa.second<2*pa.first-1)
            v.push_back({pa.first,pa.second+1});
    }
    return v;
}

int minimax(pair<int,int> pa, pair<int,int> pb, bool turn){
    state.insert(turn?pa:pb);
    vector<pair<int,int>> nx_move;
    score+=2*turn-1;
    int ans;
    
    if(!next(pa).size() && !next(pb).size()){
        ans=score;
        state.erase(turn?pa:pb);
        score-=2*turn-1;
        return ans;
    }
    if(!next(pb).size() && turn){
        nx_move=next(pa);
        ans=-50000000;
        for(auto nx_state:nx_move)
            ans=max(ans,minimax(nx_state,pb,turn));
        state.erase(turn?pa:pb);
        score-=2*turn-1;
        return ans;
    }
    if(!next(pa).size() && !turn){
        nx_move=next(pb);
        ans=50000000;
        for(auto nx_state:nx_move)
            ans=min(ans,minimax(pa,nx_state,turn));
        state.erase(turn?pa:pb);
        score-=2*turn-1;
        return ans;
    }
    if(turn){
        nx_move=next(pb);
        ans=50000000;
        for(auto nx_state:nx_move)
            ans=min(ans,minimax(pa,nx_state,!turn));
    }
    else{
        nx_move=next(pa);
        ans=-50000000;
        for(auto nx_state:nx_move)
            ans=max(ans,minimax(nx_state,pb,!turn));
    }
    state.erase(turn?pa:pb);
    score-=2*turn-1;
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    pair<int,int> pa,pb,ai;
    cin>>test;
	t=test;

    while(t--){
        cin>>s>>pa.first>>pa.second>>pb.first>>pb.second>>c;
        state.clear();
        score=0;
        forn(i,0,c)
            cin>>ai.first>>ai.second, state.insert(ai);
        state.insert(pa);
        score++;
        cout<<"Case #"<<test-t<<": "<<minimax(pa,pb,0)<<'\n';
    }
    return 0;
}