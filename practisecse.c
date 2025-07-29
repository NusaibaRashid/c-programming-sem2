//make a function to print even numbers b/w two given numbers
#include<stdio.h>
void printEVEN(int a, int b){
    for(int i=a;i<=b;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}
int main(){
   int a,b;
printf("enter two number a & b with a>b");
scanf("%d %d",&a,&b);
printf("even numbers b/w a and b are\n");
      printEVEN(a,b);
}