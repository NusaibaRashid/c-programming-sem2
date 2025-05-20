// display even numbers from 1 to n and then sum them
#include<stdio.h>
int main() {
    int i,n,sum;
    sum=0;
    printf("enter value for n : ");
    scanf("%d",&n);
    // use iterator as i+=2 and not i=2, this means nothing
    for(i=1;i<=n;i++){
       if (i%2==0)
        printf("%d\n",i);
    }
    for(i=0;i<=n;i+=2){
        sum=sum+i;}
        printf("sum = %d",sum);

    

}