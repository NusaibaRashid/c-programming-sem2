// how to open and close a file
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("test.txt","w");
    int word;
    fputc('m',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('g',fptr);
    fputc('o',fptr);
    fclose(fptr);
}
