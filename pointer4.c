#include<stdio.h>
//swap two numbers a&b using call by value and by call by reference
// HINT: ALWAYS make a THIRD variable
// swapping ka mtlb main mai jo a,b hai, main function mai hi function call k bad, main mai hi print alag alag honay chahiyay  

// this is by call by value( swapping this way is not possible)
void swap(int a , int b){
    int temp ; // create a temporary variable
    temp=a;// a ki value temp mai dali
    a=b; // b ki value a mai dali
    b=temp; // temp ki value b mai dali
   
}
int main(){
int a=4;
int b=5;
swap(a,b); // i swapped here
printf("after swapping \n a=%d\n b=%d\n",a,b);

    

// // this is by call by reference
// int main(){
// int a=4;
// int b=5;
// printf("before swapping \na=%d\n b=%d\n",a,b);
// int temp;
// int *aptr=&a;
// int *bptr=&b;
// temp = *aptr;
// *aptr=*bptr;
// *bptr=temp;
// printf("after swapping \na=%d\n b=%d\n",a,b);

return 0;
}