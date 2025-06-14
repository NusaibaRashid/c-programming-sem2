#include<stdio.h>
//Q1 write  a function that prints namaste if user is indian and bonjour if the user is french
void french(){
    printf("Bonjour\n");
}
void indian(){
    printf("Namaste\n");
}
void invalid(){
    printf("invalid input\n");
}

int main(){
    char ans;
   printf ("Write i if you are Indian and f if you are French?\n");
   scanf("%c",&ans);
   if(ans=='i'){
indian();
   }
   else if(ans=='f'){
    french();
   }
   else{
    invalid();
   }
}