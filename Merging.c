#include <stdio.h>
int main(){
int a[]={1,2,3};
int b[]={3,4,6};
int i,j;
   int m=sizeof(b)/sizeof(b[0]);
   int p=n+m;
   for(int i=m;i<p;i++){
       a[i]=b[i-m];
   }
   for(int i=0;i<p;i++){
       printf("%d ",a[i]);
   }
}

//another if duplicates occur

// void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//   int i=m-1;
//   int j=n-1;
//   int k=n+m-1;
//   while(i>=0 && j>=0){
//     if(nums1[i]>nums2[j]){
//         nums1[k--]=nums1[i--];
//     }
//     else{
//         nums1[k--]=nums2[j--];
//     }
//   }
//   while(j>=0){
//       nums1[k--]=nums2[j--];
//   } 
// }