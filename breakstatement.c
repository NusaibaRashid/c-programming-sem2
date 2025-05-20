//keep taking numbers as input from the user until user enters an odd number
#include<stdio.h>
int main() {
    int n;// define a variable
    // using a do-while loop
    do{
        printf("enter a number :");
        scanf("%d",&n);
        printf("%d \n",n);

        //checking if the number is odd or even

        if(n%2!=0){
            break; //if the number entered is odd we will exit the loop
        }
    }
    while (1);
    printf("thank you");
     
}
    