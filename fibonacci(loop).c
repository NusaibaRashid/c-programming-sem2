// write fibpnacci sequence 0,1,1,2,3,5
#include<stdio.h>
int main() {
    int n;
    int a=0;
    int b=1;
    int next;
    printf("enter n: ");
    scanf("%d",&n);

    for (int i=0;i<n;i++){
printf("%d",a);
next=a+b;
a=b;
b=next;
    }

}