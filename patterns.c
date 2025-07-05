#include<stdio.h>
/*print this pattern * * * * *...n       hint: use 2 nested for loops ; 4 rows and each row has 5*(starts from 1 upto 5)
                     * * * * *..n
                     * * * * *..n
                     * * * * *..n
                     .
                     .
                     ...ntimes
*/ 
int main(){
    int n;
    printf("enter value for n :");
    scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
   { printf("* ");}
    printf("\n");
}
}