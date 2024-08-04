#include<stdio.h>
#include <math.h>
int main(){
    int num=5;
  int a=0,b=1;
  printf("%d %d ",a,b);
  for(int i=0;i<num;i++){
      int c=a+b;
       printf("%d ",c);
      a=b;
      b=c;
     
  }
    
}