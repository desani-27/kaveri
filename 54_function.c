/*write return value & with argument function.
example:print multiplication table.
*/
#include<stdio.h>
void printable(int num)
{
    for(int i=1;i<=10;i++)
    printf("%d*%d=%d\n",num,i,num*i);
}
void main()
{
    int n;
    printf("enter number:")
    scanf("%d",&n);
    printable(n);
}