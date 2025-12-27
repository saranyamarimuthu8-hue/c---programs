#include <stdio.h>

int main()
{
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int left=0,right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==x){
            printf("Pair found:%d %d",arr[left],arr[right]);
            return 0;
        }
        else if(sum<x)
        left++;
        else
        right--;
    }
    printf("No pair found\n");

    return 0;
}
