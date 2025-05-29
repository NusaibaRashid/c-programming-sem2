 // input an integer array from user and display the same
#include<stdio.h>
int main (){
int arr[100],n;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter %d integers :\n",n);
for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
}
}