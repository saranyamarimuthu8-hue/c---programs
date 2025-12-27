#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int found=0;
        for(int j=0;j<n;j++){
            if(i!=j){
                if(arr[i]==arr[j]+1||arr[i]==arr[j]-1){
                    found=1;
                    break;
                }
            }
        } 
        if(found==0){
            printf("Not Nice array");
            return 0;
        }
    }
    printf("Nice array");
    return 0;
}
