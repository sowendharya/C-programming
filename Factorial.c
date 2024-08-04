#include <stdio.h>
int main() {
int num;
 printf("Enter a number: ");
    scanf("%d",&num);
    int mul=1;
    for(int i=1;i<num;i++){
        mul=mul*i;
    }
  printf("%d",mul);
}