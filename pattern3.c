#include<stdio.h>
/*print this pattern * * * * ...n     hint: use 2 nested for loops ; 4 rows and each row has 5*(starts from 1 upto 5)
                     * * * ...n-1
                     .
                     .
                     .
                     * * *
                     * * 
                     * 
*/ 
int main(){
    int n;
    printf("enter value for n :");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}