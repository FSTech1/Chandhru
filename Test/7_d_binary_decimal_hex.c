/*
Name:
Date:
Description:
sample i/p:
sample o/p:
*/
#include<stdio.h>
void decimal_hexa(int);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int i = 1,decimal = 0,rem;
    while(num != 0)
    {
	rem = num % 10;
	decimal = decimal + rem * i;
	i = i * 2;
	num = num / 10;
    }
    printf("Binary to decimal value is %d\n",decimal);
    decimal_hexa(decimal);
    return 0;
}
void decimal_hexa(int n)
{
    int rem,i = 1,hexa = 0;
    while(n != 0 )
    {
	rem = n % 16;
	hexa = hexa + rem * i;
	i = i * 16;
	n = n / 16;
    }
    printf("Decimal value to hexadecimal value is %x\n",hexa);
}

