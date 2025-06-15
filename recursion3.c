//use recursion to find factorial of n natural numbers; let n=5
#include<stdio.h>// donot forget to write this line
//define recursive function
int calfactorial(int n){
    if(n==1){
        return 1;
    }
    return calfactorial(n-1)*n;
}
//add main function
int main(){
    printf("factorial is : %d",calfactorial(5));
}

