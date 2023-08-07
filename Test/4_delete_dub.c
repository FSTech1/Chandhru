/*
Name:
Date:
Description:
sample i/p:
sample o/p:
*/
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, j, k;
  	printf("\n Please Enter any String :  ");
  	fgets(str,100,stdin);	
	int len = strlen(str);
  	for(i = 0; i < len; i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])  
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}
	printf("\n The Final String after Removing All Duplicates = %s ", str);
  	return 0;
}
