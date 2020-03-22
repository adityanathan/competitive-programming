#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

long merge(int a[],int l, int r){
    int b[r-l+1];
    int mid=(l+r)/2,i=0,j=0;
    long count=0;
    while(i<=mid-l && j<= r-mid-1){
        if(a[i+l]<=a[j+mid+1]){
            b[i+j]=a[i+l];
            i++;
        }
        else{
            b[i+j]=a[j+mid+1];
            j++;
            count++;
            }
    }
    while(i<=mid-l){
        b[i+j]=a[i+l];
        i++;
    }
    while(j<=r-mid-1){
        b[i+j]=a[j+mid+1];
        j++;
    }
    for (int i=l;i<=r;i++){
        a[i]=b[i-l];
    }
    return count;
    
}

long mergesort(int a[],int l,int r){
    if(l>=r) return 0;
    int mid=(l+r)/2;
    return mergesort(a,l,mid)+mergesort(a,mid+1,r)+merge(a,l,r);
}

// Complete the countInversions function delow.
long countInversions(vector<int> arr) {
    int a[arr.size()];
    for(int i=0;i<arr.size();i++)
        a[i]=arr[i];
    return mergesort(a,0,arr.size()-1);
}

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        long result = countInversions(arr);
        cout << result << "\n";
    }
}