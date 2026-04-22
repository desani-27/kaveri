/*write a program to finout the person is eligible to give civil services or not.
---------------------------------------------------------------------------------
make one variable of age.
take input in age.
make if condition if the person age is bigger then 19 and smaller then 35  he can give the
civil services
otherwise not
*/
#include<studio.h>
void main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age>19&&age<35)
    {
        printf("you are eligible to give civil services");
    }
    else
    {
        printf("you are not eligible to give civil services")
    }
}