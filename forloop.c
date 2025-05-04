// print sum of first n natural numbers
#include<stdio.h>
int main(){
    int n,i,sum=0;
printf("enter value for n : \n");
scanf("%d",&n);
for (int i=1;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);


}