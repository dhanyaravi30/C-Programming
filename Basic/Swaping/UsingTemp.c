#include<stdio.h>
int main(){
    int a = 2,b =3,temp;

    temp=a;
    a=b;
    b=temp;

    printf("a : %d \n",a);
    printf("b : %d ",b);
}