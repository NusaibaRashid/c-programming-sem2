// multiplication of 2 matrices
#include<stdio.h>
int main (){
int A[3][3]={{1,2,7},{3,4,8},{5,6,9}};
int B[3][3]={{2,2,2},{1,1,1},{1,1,1}};
int pro[3][3];
printf("matrix multiplication: \n");
for(int i=0;i<3;i++) //loop over rows of A(i)
{
for(int j=0;j<3;j++) //loop over rows of B(j)
{
    pro[i][j]=0;
    for(int k=0;k<3;k++) //loop over shared dimension (k) to perform all multiplications and sums
    {
    pro[i][j]+= A[i][k]*B[k][i];}
    printf("%d ",pro[i][j] );
}
printf("\n");
}
}