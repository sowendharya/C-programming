#include <stdio.h>
int arrareversing(int arr[],int n){
 
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    
}
int main() {
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Reveresed array:");
   arrareversing(arr,n);

    return 0;
}