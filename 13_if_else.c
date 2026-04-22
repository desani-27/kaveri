/* write a program to findout product is cheaper and which product is expensive.
create variable price1,price2,weight1,weight2,price_per_gram_2;
acept 1st product weight and price 
acept 2nd product weight and price 
finout price_per_gram_1:
price_per_gram_1=price1/weight1;
findout price_per_gram_2:
price_per_gram_2=price2/weight2;
if(price_per_gram_1<price_per_gram_2)
product1 is cheaper
else
product2 is cheaper
*/
#include<stdio.h>
void main();
{
    int price1,price2,weight1,we4ight2;
    float price_per_gram_1,price_per_gram_2:


    printf("enter price 1:");
    scanf("%d",&price 1);
    printf("enter weight 1:");
    scanf("%d",&weight 1);
     printf("enter price2:");
    scanf("%d",&price 2);
    printf("enter weight 2:");
    scanf("%d",&weight 2);
    price_per_gram_1=price1/weight1;
    price_per_gram_2=price2/weight2;

    if(price_per_gram_1<price_per_gram_2)
    {
        printf("product 1 is cheaper");
    }
    else{
        printf("product 2 is cheaper");
    }
} 