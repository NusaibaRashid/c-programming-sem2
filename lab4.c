// check if a  string is pallindrome using pointers 
// palindrome: word that reads the same backwards
#include<stdio.h>
#include<string.h>
int isPalindrome(char *str){
    char *start=str;
    char*end=str + strlen(str)-1;
    while (start<end){
        if (*start !=*end)
        return 0;
        start++;
        end --;
    }
    return 1;
}
int main (){
    char str [100];
    printf("enter a string : ");
    scanf(" %s", str);
    if (isPalindrome(str))
    printf("the string is palindrome: \n");

    else 
    printf("the string is not a pallindrome \n");
    return 0;
}



