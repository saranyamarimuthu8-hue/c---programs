#include <stdio.h>

int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int left=0,sum=0,maxlength=0;
    for(int right=0;right<n;right++){
    sum+=arr[right];
    while(sum>x){
        sum-=arr[left];
        left++;
    }
    if(right-left+1>maxlength)
    maxlength=right-left+1;
    }
    printf("Longest subarray length=%d\n",maxlength);

    return 0;
}
