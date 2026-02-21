#include <stdio.h>
void main()
{
    int a=20,b=21;
    printf("%d=%d==%d",a==b,a,b);
    printf("\n %d=%d!=%d",a!=b,a,b);
    printf("\n %d=%d<%d",a<b,a,b);
    printf("\n %d=%d>%d",a>b,a,b);
    printf("\n %d=%d<=%d",a<=b,a,b);
    printf("\n %d=%d>=%d",a>=b,a,b);
}