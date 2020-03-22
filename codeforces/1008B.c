#include <stdio.h>

int main(void) {
    int i,n;
    scanf("%d",&n);
    int h[n],w[n],temp;
    scanf("%d %d",&w[0],&h[0]);
    if(h[0]<w[0]){
        temp=w[0];
        w[0]=h[0];
        h[0]=temp;
    }
    for(i=1;i<n;i++){
        scanf("%d %d",&w[i],&h[i]);
        if(h[i]<w[i]){
            temp=w[i];
            w[i]=h[i];
            h[i]=temp;
        }
        if(h[i]<=h[i-1]){
            continue;
        }
        else if(w[i]<=h[i-1]){
            temp=w[i];
            w[i]=h[i];
            h[i]=temp;
            continue;
        }
        else{
            printf("NO");
            break;
        }
    }
    if(i==n) printf("YES");
    
}
