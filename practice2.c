#include<stdio.h>
int main(){
    int a,b,c;
printf("enter sides a,b of a rectangle\n");
scanf("%d %d",&a,&b);
printf("perimeter of the rectangle is :%d\n",a+a+b+b);
//to find cude of a number
printf("enter a number :\n");
scanf("%d",&c);
printf("cube of the number is :%d",c*c*c);
//to print average of three numbers
int d,e,f;
printf("enter 3 numbers :\n");
scanf("%d %d %d",&d,&e,&f);
int avg=(d+e+f)/3;
printf("average of the  3 numbers is %d :\n",avg);
/* write a program to check if given character is digit or not ( concept of ASCII digits are from '0' to '9' not 0 to 9)
they are characters not integers, also A(65), Z(90), a(97), z (122)*/
char digit;
printf("enter a character :\n");
scanf(" %c",&digit);
if (digit>='0'&& digit<='9')
printf("is a digit");
else
printf("is NOT a digit");

// write a program to print the smallest number of the two
int h,i;
printf("enter 2 numbers :\n");
scanf("%d %d",&h,&i);
if (h>i)
{printf("smallest number is %d",i);}
else
{printf("smallest number is %d",h);}
// write a program to check if a given number is a natural number
int j;
printf("enter a number :\n");
scanf("%d",&j);
(j>0)?printf("is a natural number"):printf("is NOT a natural number");
}