#include <stdio.h>
int duplicates(int arr[],int n){
    int count=0;int i;
    for(int i=1;i<n;i++){
        if(arr[count]!=arr[i]){
            count++;
             arr[count]=arr[i];
        }
       
    }
    return arr[count+1];
}
int main(){
    int arr[]={1,2,3,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=duplicates(arr,n);
    for(int i=0;i<result;i++){
    printf("%d",arr[i]);
    }
}

