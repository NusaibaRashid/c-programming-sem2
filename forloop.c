// print sum of first n natural numbers
#include<stdio.h>
int main(){
    int n,i,sum=0;
 printf("enter value for n : \n");
 scanf("%d",&n);
 for (int i=1;i<=n;i++)
 {
 sum=sum+i;//sum=0+1->sum=1+2->sum=3+3->sum=6+4=10
}
printf("%d",sum);


}