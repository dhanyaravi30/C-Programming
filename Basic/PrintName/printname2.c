//Program to Print Your Own Name by Taking it as Input

#include<stdio.h>
int main(){
    char name[100];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Your name is %s", name);
    return 0;
}