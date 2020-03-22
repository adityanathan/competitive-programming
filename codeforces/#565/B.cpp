#include <bits/stdc++.h>
using namespace std;

int main()
{   int q,n,num;
    cin >>q;
    
    while(q--){
    	cin>>n;
        int count1=0,count2=0,count3=0;
        for(int i=0;i<n;i++){ 
            cin>>num;
            if(num%3==0)
                count3+=1;
            else if(num%3==1)
                count1+=1;
            else count2+=1;
        } 
        //cout<<count1<<" "<<count2<<" "<<count3<<"\n";
        if(count2>=count1)
            cout<<count3+count1+(count2-count1)/3<<"\n";
        else cout<<count3+count2+(count1-count2)/3<<"\n";
    }
    return 0;
    
} 