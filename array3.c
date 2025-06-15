// input a string from user and display the same
#include<stdio.h>
int main (){
char str[100];
printf("enter a string :");
scanf("%s", str);
printf("you entered :%s\n", str);// str= &str[0]
}

//input a string from the user and find its length (without using string library)
printf("enter a string :");
fgets(str,sizeof(str),stdin);
