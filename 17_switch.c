/*wrtie a program to take from user and make the addition,substraction,division
variable num1,num2, choice
variable float result
accept input from user in num1
accept input from user in num2
accept choicr from user 
decide operation upon user choice
if choice==1 then
result=num1+num2;
if choice==2 then
result=num1-num2
if choice==3 then
result=num1/num2;
if choice==4 then
result=num1*num2;
otherwise
print invalid choice
*/
#include<stdio.h>
void main()
{
    int num1,num2,choice;
    float result;
    printf("enter num1:");
    scanf("%d0,&num1");
    printf("enter num2");
    scanf("%d",&2);
    printf("1.addition 2.substraction 3.division 4.multiplication");
    scanf("%d",&choice);
     
    switch(choice)
    {
        case 1:
        result=num1+num2:
        break;

        case 2:
        result=num1-num2;
        break;

        case 3:
        result=num/num2;
        break;

        case 4:
        result=num1*num2;
        break;
    }
    if(choice>=1&&choice<=4)
    {
        printf("result=%.2f,result");
    }
}