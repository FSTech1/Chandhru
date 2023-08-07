/*
Name:
Date:
Description:
sample i/p:
sample o/p:
*/
#include<stdio.h>
#define XYZ  ((x > y) && (x > z)) ? x : ((y > x) && (y > z)) ? y : z
int main()
{
    int x,y,z;
    printf("Enter the three values:");
    scanf("%d %d %d",&x,&y,&z);
    printf("Greatest number is %d\n",XYZ);
    return 0;
}

