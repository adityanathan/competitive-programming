#include<bits/stdc++.h>
#pragma GCC optimize("O2")
using namespace std;

#define endl            "\n"
#define forn(i,x,n)     for(int i=x; i<n; i++)
#define forit(it, m)    for(decltype(m)::iterator it = m.begin(); it!=m.end(); ++it)
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void zeus()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


int32_t main() {

     // zeus();

    int count = 1;
    w(t) {
        int n; cin >> n;

        priority_queue<int> x;
        cout << "Case #" << count << ": ";

        int ans = 0;
        int prev = 0;
        forn(i, 0, n) {
            int y; cin >> y;
            x.push(-y);

            ans = max(prev, min(-1 * x.top(), (int)(x.size())));
            // cout << -1 * x.top() << " ";
            if ((-1 * x.top()) <= (int)(x.size()))
                x.pop();

            prev = ans;
            cout << ans << " ";

        }
        cout << endl;
        count++;




    }















}