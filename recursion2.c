//find sum of n natural numbers using recursion
#include<stdio.h>
int calculatesum(int n){// use int as a value needs to returned which will be later printed in main function
    if(n==1){  // this will be the end point 
        return 1;
    }
 return calculatesum(n-1)+n;   //recursion 
}
int main(){
printf("%d",calculatesum(5)); //here we print the called function
    return 0;
}