// traverse a matrix 
#include<stdio.h>
int main (){
int arr[3][3]={{1,2,7},{3,4,8},{5,6,9}};
printf("matrix traversal: \n");
for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}

// addition of 2 matrices
int A[3][3]={{1,2,7},{3,4,8},{5,6,9}};
int B[3][3]={{1,1,1},{1,1,1},{1,1,1}};
int add[3][3];
printf("matrix addition: \n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
    add[i][j]= A[i][j]+B[i][j];
    printf("%d ",add[i][j] );
}
printf("\n");
}


}