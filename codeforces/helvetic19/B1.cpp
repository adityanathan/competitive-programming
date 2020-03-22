#include <bits/stdc++.h>
using namespace std;

int floorSearch(vector<pair<int ,int> > arr, int low, int high, int x) 
{   int mid=low+(high-low)/2;
    if(high<low)
        return high;
    if(high==low)
        return low-1;
    if(arr[mid].first<=x)
        return floorSearch(arr,mid+1,high,x);
    else return floorSearch(arr,low,mid-1,x);
} 

int main(){
    vector <pair<int,int> >v;

    int s,i,n,a,b;

    
    cin>>s>>n;
    int arr[s], sums[n];
    for(i=0;i<s;i++){
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    sums[0]=v[0].second;

    for(i=1;i<n;i++){
        sums[i]=sums[i-1]+v[i].second;
        // cout<<sums[i]<<" ";
    }


    for(i=0;i<s;i++){
        cout<<sums[floorSearch(v,0,n-1,arr[i])]<<" ";
    }

    return 0;
}