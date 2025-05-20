//write a program to check if the character entered is lower or upper case
#include<stdio.h>
int main(){
    char character;
    printf("enter a character : \n");
    scanf("%c",&character);
if(character>='a'&& character<='z'){
    printf("LOWERCASE");
}
else if (character>='A' &&character<='Z'){
    printf("UPPERCASE");}
else {
    printf("not a valid input");
}

}

    
