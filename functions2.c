#include<stdio.h>
// use functions to write sum of two numbers and table of a number
int sum(int a,int b){ // return type here is int thats why we return a+b;
    return a+b;
}
void table(int n){ //here variable "n" is called an parameter, yahan "n" ka datatype likhna zaruri hai
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}
int main(){
int a,b,n; // "a" and "b" will be summed while as "n" ka table display hoga
printf("enter two numbers a and b\n");
scanf("%d %d",&a,&b);
printf("enter n whose table you need");
scanf("%d",&n);
int s= sum(a,b);
printf ("sum is :%d\n",s);
table(n); //here variable "n" is called an argument/ actual value, yahan "n" ka datatype likhna zaruri nahi hai
return 0;
}