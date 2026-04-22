/*write a program to store and display student detils*/
#include<stdio.h>
//define structure
struct student
{
    int roll;
    chr name[50]
    float marks;//member-veriable
};
void main()
{
    struct student s1;//declare structure variable
    //input
    printf("enter rollno:");
    scanf("%d",&S1.roll);
    printf("enter namr:");
    scanf("%s",&s1.name);
    printf("enter marks:");
    scanf("%f",&S1.marks);
    //output
    printf("\n-----------------------------student detail----------------------\n");
    printf("roll number=%d",s1.rool);
    printf("name=%s\n",s1.name);
    printf("marks=%f\n",s1.marks);

}