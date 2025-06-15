#include<stdio.h>
// print hllo world 5 times using recursion(jo kaam loop sai hota hai wohi kaam recursion sai hota hai)
//recursive function ->
void printHW(int count){
    if(count==0){
        return;
    }
printf("HelloWorld\n");
printHW(count-1);
}
 
int main(){
    printHW(5);   
}