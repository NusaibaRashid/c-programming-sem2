//display contents of intege array in reverse order
#include<stdio.h>
int main (){
    int arr[10],n;
printf("enter number of elements :");
scanf("%d",&n);
printf("enter %d integers \n",n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("array in reverse order :\n");
for (int i=n-1;i>=0;i--){
    printf("%d",arr[i]);
}
}