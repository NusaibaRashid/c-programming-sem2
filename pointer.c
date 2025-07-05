//understanding pointers
#include<stdio.h>
int main(){
    int age =22;
    int *ptr=&age;
    int _age=*ptr;
    printf("%d\n",*ptr); //prints value at addres stored in ptr

    //printing addresses using %p, prints value in hexadecimal form
    printf("%p\n",&age);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);

    //printing addresses using %u (unsigned integer), prints value in integers.
    // ignore the warnings generated
    printf("%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);

 //printing values (here we will use %d)
 printf("%d\n",age);
    printf("%d\n",*ptr); // * -> value at address
    printf("%d\n",*(&age)); // *=value at address(&=address of age)

    // pointer to pointer
     float price = 100.0;
     float *ptr= &price; // normal variable ka address store kiya pointer nai
     float **pptr= &ptr; // pointer ka address store kiya pointer to pointer nai

    return 0;
}