// main disadvantage of array is that its size is fixed
// different functions that we can perform on araay are:traverse , search, sorting(6 types of sorts e.g quick sort and bubble sort)
//search: linear(searches all n terms}) amd binary (searches only n/2 terms) & ternary search
//bubble sort , there are passes


//find the sum of the elements of an integer array
#include<stdio.h>
int main (){
int arr[100],n,sum=0;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter %d elements: \n",n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("sum of array elements = %d",sum);
return 0;
}