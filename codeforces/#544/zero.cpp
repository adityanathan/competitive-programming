#include <bits/stdc++.h>

#define Nmax 200005
#define ll long long

using namespace std;

int N;
int A[Nmax], B[Nmax];
map <long double, int> M;

int main()
{
    cin >> N;
    for(int i = 1; i <= N; i++)
        cin >> A[i];
    for(int j = 1; j <= N; j++)
        cin >> B[j];
    int ans = 0;
    int zeros = 0;
    for(int i = 1; i <= N; i++)
    {
        if(A[i] != 0)
            M[(long double)B[i] / A[i]]++;
        if(A[i] == B[i] && A[i] == 0)
            zeros++;
    }
    for(auto it : M)
        ans = max(ans, it.second);
    cout << ans + zeros << "\n";
    return 0;
}