#include<stdio.h>
void calculateprice(float price){ //price is parameter/ formal parameter
price = price + 0.18*price;
printf("final price is %f\n",price);
}
int main(){
    float price= 100;
    printf("initial price is %f\n",price);/*initially the price was 100 even after calling a function value of price doesnot change
     because price ia an argument*/

    calculateprice(price); // price is argument/ actual parameter 

    printf("initial price is %f\n",price); /*the changes to the price occured only in the calculateprice function 
    .i.e where price was a parameter , therefore changes to parameter doesnot affect the argument*/
}