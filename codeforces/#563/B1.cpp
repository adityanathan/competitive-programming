#include <bits/stdc++.h>


using namespace std;

int N;

int main()
{
    cin >> N;
    int a[2*N];
    for(int i = 0; i <= 2*N-1; i++)
        cin >> a[i];
    
    int ans = 0;

    sort(a,a+2*N);
    
     for(int i = 0; i <= N-1; i++)    
    	ans+=a[i];

    	for(int i = N; i <= 2*N-1; i++)    
    	ans-=a[i];

    if(ans==0)
		cout << "-1";
	else for(int i = 0; i <= 2*N-1; i++)    
    	cout<< a[i]<<" ";
    return 0;
}