#include <stdio.h>
int main(){
int a[]={7,2,3};
int temp;
int b=sizeof(a)/sizeof(a[0]);
for(int i=0;i<b;i++){
    for(int j=i+1;j<b;j++){
    if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
}
for(int i=0;i<b;i++){
    printf("%d",a[i]);
}
}