#include<stdio.h>
void main()
{
    int a=24,b=36;
    b=a++;
    printf("a=%d b=%d",a,b);
    b=--a;
    printf("a=%d b=%d",a,b);
}