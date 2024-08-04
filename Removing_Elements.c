#include<stdio.h>
int main(){
    int count=0;
    int n,val;
    printf("enter no of elements in a array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter value to delete:");
    scanf("%d",&val);
    for(int i=0;i<n;i++){
    if(arr[i]!=val){
        arr[count]=arr[i];
        count++;
    }
    }
    printf("No of element after removing: %d",count);
    for(int i=0;i<count;i++){
        printf("\n %d",arr[i]);
    }
}