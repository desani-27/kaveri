#include<stdio.h>
void main()
{
    char nume{32},address[512];
    printf("enter your name:");
    sacnf("%s",name);

    fflush(stdin);//must put this fuction between two variable input
    printf|("enter you address:");
    gets(address);

    //display
    printf("name=%s",name);
    printf(address);
    puts(address);
}