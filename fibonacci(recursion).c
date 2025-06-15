// fibonacci is a series in which each number is a sum of previous two no.s [n= (n-1)+(n-2)] 0,1,1,2,3,5,8,13,21...
// write a function to print n terms of fibonacci sequence
#include<stdio.h>
//recursive function
int fibonacci(int n){
    if(n==0){ //end points
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    printf("%d",fibonacci(5));
    
}
