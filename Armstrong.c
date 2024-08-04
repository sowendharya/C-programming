#include<stdio.h>
#include <math.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int duplicate=num;
    int last;
    int mul=0;
    int n=0;
while(duplicate!=0){
    n++;
    duplicate=duplicate/10;
}
duplicate=num;
while(duplicate!=0){
    last=duplicate%10;
    mul+=pow(last,n);
    duplicate=duplicate/10;
}
if(mul==num){
    printf("%d is armstrong number",num);
}
else{
    printf("%d is not a armstrong number",num);

}
return 0;

    
}