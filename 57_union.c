#include<stdio.h>
//define union
unoun data
{
    int i;
    float f;
    char c;
};
void main()
{
    union data d;
    //assigning integer
    d.i=10;
    printf("integer value=%d\n",d.1);

    //assigning float
    d.f=5.5;
    printf("float value=%.2f\n",d.f);

    //assigning char
    d.c='A';
    printf("character value=%c\n",d.c);
}