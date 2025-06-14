// sort an integer array using Bubble Sort,
#include<stdio.h>
int main (){
int arr[100],n,temp;
printf("enter number of elements: ");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
// Bubble Sort
for(int i=0;i<n-1;i++){ // this loop is for passes, we take n-1 kyu ki end wala element largest hi banay ga 
    //usko kissi k sath compare nahi karna hai
    for(int j=0;j<n-1-i;j++){ // this loop is for comparing numbers, we take n-1-i kyu har pass mai matrix chota hojayay ga by i
if(arr[j]>arr[j+1]){
    temp = arr[j];   // these lines are for swapping
    arr[j]=arr[j+1];
    arr[j+1]=temp;
}
    }
}
printf("sorted array :\n");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
    printf("\n");
}
return 0;
}