#include <stdio.h>
int main(){
    int num,flag=0;
    printf("Enter a number");
    scanf("%d",&num);
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            flag=1;
        }
    }
    if(flag==0){
        printf("Prime");
    }
    else{
        printf("NOt prime");
    }
}