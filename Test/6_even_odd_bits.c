/*
Name:
Date:
Description:
sample i/p:
sample o/p:
*/
#include<stdio.h>
int main()
{
    typedef unsigned long int uint;
    uint n,ans;
    printf("Enter the value:");
    scanf("%lu",&n);
    uint even_mask = 0x5555555555555555,odd_mask = 0xAAAAAAAAAAAAAAAA;
    uint even,odd;
    even = n & even_mask;
    even = even << 1;
    odd = n & odd_mask;
    odd = odd >> 1;
    ans = even | odd;
    printf("After swapping %lu\n",ans);
    return 0;
}

