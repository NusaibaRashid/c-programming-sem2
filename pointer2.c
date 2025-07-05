#include<stdio.h>
int main(){

// Q print the value of "i" from its pointer to pointer
int i=5;
int *ptr=&i;
int **pptr=&ptr;
printf("%d",**pptr);  
    return 0;
}