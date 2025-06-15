//write a function to calculate total percentage of a student from marks in science, maths, english
#include<stdio.h>
int calpercentage(int science,int maths, int english){
   return ((science+maths+english)/3);
}
int main(){
   printf("%d",calpercentage(98,90,100));
}