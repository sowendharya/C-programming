
#include <stdio.h>
#include<limits.h>
int main() {
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max= arr[i];
        }
        else if(arr[i]<min){
            min= arr[i];
        }
    }
    printf("max num: %d",max);
    printf("min num:%d",min);
  

    return 0;
}