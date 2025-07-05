#include<stdio.h>
/*print this pattern *        hint: use 2 nested for loops; has n rows ; nth row has n*(row1 -> 1* ; row2 -> 2*)   
                     * * 
                     * * * 
                     * * * * 
                     .
                     . upto n times
*/ 
int main(){
    int n;
    printf("enter value for n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}