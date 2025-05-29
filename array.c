// display contents of an integer array using for loop 
#include<stdio.h>
int main (){
    int arr[5]={10,20,30,40,50};
    int n =sizeof(arr)/sizeof(arr[0]);
    printf("array elements are: \n");
   for(int i=0;i<n;i++){
    printf("%d \n",arr[i]);
   }
   return 0;
}