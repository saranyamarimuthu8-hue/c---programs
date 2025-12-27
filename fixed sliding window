#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int windowsum=0;
    for(int i=0;i<k;i++){
        windowsum+=arr[i];
    }
    int maxsum=windowsum;
    for(int i=k;i<n;i++){
        windowsum=windowsum+arr[i]-arr[i-k];
        if(windowsum>maxsum)
        maxsum=windowsum;
    }
    printf("%d",maxsum);

    return 0;
}
