/*
Name:
Date:
Description:
sample i/p:
sample o/p:
 */
#include<stdio.h>
int hexa_decimal(int);
void decimal_binary(int);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%x",&num);
    int decimal = hexa_decimal(num);
    printf("Hexadecimal to Decimal value is %d\n",decimal);
    decimal_binary(decimal);
    return 0;
}
int hexa_decimal(int n)
{
    int i = 1,decimal = 0,rem;
    while(n != 0)
    {
	rem = n % 16;
	decimal = decimal + rem * i;
	i = i * 16;
	n = n / 16;
    }
    return decimal;
}
void decimal_binary(int num)
{
    int i;
    printf("Decimal to Binary value is:");
    for(i = 31;i >= 0;i--)
    {
	if(num & (1 << i))
	{
	    printf("1");
	}
	else
	{
	    printf("0");
	}
    }
    printf("\n");
}
