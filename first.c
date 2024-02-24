#include<stdio.h>
int main(){
    char letter;

    printf("enter your letter");
    scanf("%c",&letter);

    if(letter >= 'a' && letter <='z'){
        printf("the letter in lowercase");
    }
    else{
        printf("the letter in uppercase");
    }
}