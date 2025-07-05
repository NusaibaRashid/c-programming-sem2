#include<stdio.h>
// pointers in function call -> call by value  -> call by reference
// this square function demonstrates call by value, there is no change in argument .i.e number =4 
void square(int n) {
    n=n*n;
    printf("square is : %d\n",n);
}
// this square function demonstrates call by reference, there is change in argument .i.e number =4 
// here we are making use of pointers
void _square(int *n) { // int *n -> means yahan par pointer anay wala hai mtlb kissi variable k address ko hum yahan par daynay walay hai
    *n=(*n)*(*n);
    printf("square is : %d\n",*n);
}
int main(){
    int number =4;
    square(number);
    printf("number is : %d\n",number);

    _square(&number); // argument mai address dalna hai .i,e &number (*n=&number pointer=address)
    printf("number is : %d\n",number);

    return 0;
}