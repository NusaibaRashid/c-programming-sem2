// write a function that takes two numbers and prints all the even numbers between them( functions, loops)
#include<stdio.h>
void swap(int *x,int *y){
    int temp = *x;
    *x= *y;
    *y=temp;
}
void printEVEN(int a, int b){
if (a%2==0)
{for(int i=a;i<=b;i+=2){
    printf("even numbers are : \n %d\n",i);}}
    else if(a%2!=0)
    {for(int i=a+1;i<=b;i+=2){
        printf("even numbers are : \n %d\n",i);}}
}
int main(){
    int a,b;
    printf("give two numbers a & b :\n");
    scanf("%d %d",&a,&b);
    
    if(a>b){
        swap(&a,&b);
        printEVEN(a,b);
    }
else
    printEVEN(a,b);
    return 0;
}
