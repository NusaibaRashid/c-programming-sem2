//keep taking numbers as input from the user until user enters multiple of 7(learning to use break;)
#include<stdio.h>
int main() {
    do{
        int n;
        printf("enter a number: \n");
        scanf("%d",&n);
        printf("%d\n",n);
if(n%7!=0){
    break;
}
    }
    while(1);
    printf("thank you");

}