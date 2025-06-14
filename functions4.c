//write functions to calculate area of a square, a circle & a rectangle
//also use library function to find square of a number
#include<stdio.h>
#include<math.h>// this is the library

float area_of_square(float side){
    return pow(side,2);
}
float areaofcircle(float radius){ 
    return 3.14*radius*radius;
}
int area_of_rect(int length,int breadth){
    return length*breadth;
    
}


int main(){
int number;
printf("enter a number\n");
scanf("%d",&number);
printf("%f\n",pow(number,2)); // pow(number,2) value is double therfore we are using %f instead of %d

int area;
int side,radius,length,breadth;
printf("write (1) for finding area of square\n");
printf("write (2) for finding area of circle\n");
printf("write (3) for finding area of rectangle");
scanf("%d",&area);
if(area==1){
    printf("enter side\n");
    scanf("%d",&side);
    printf("area is :%f\n",area_of_square(side)); //use %f cause pow uses larger size than integer

}
else if (area==2){
    printf("enter radius");
    scanf("%d",&radius);
    printf("area of the circle is :%f",areaofcircle(radius));
    
}
else if (area==3){
    printf("enter length & breadth\n");
    scanf("%d %d",&length,&breadth);
    int rect= area_of_rect(length,breadth);

printf("area of the rectangle is :%d",rect);
}
}