//Q1 : write a program to find product of numbers from 1 to 10
#include<stdio.h>
int main(){
    int i,product=1;
    for(i=1;i<=10;i++){
        product=product*i;
    }
    printf("%d\n",product);


//Q2 : write a program to find product of even numbers from 1 to 10
int pro=1;
for(i=1;i<=10;i++){
    if(i%2==0)
pro=pro*i;
}
printf("%d\n",pro);

//Q3 : write a program to find product of odd numbers from 1 to 10
int product_odd=1;

for(i=1;i<=10;i++){
    if(i%2!=0)
    product_odd=product_odd*i;
}
printf("%d\n",product_odd);

}