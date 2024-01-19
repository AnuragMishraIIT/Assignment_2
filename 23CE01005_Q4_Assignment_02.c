/*  
    LAB ASSIGNMENT 2
    Question number: 04

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 19 Januray 2024
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the year to determine if a leap year or not:\n");
    scanf("%d",&n);

    if(n%100==0)
    {
        if(n%400==0)
        {
            printf("%d is a leap year\n",n);
        }
        else
        {
            printf("%d is NOT a leap year\n",n);
        }
    }

    else
    {
        if(n%4==0)
        {
            printf("%d is a leap year\n",n);
        }

        else
        {
            printf("%d is NOT a leap year\n",n);
        }
    }
    return 0;

}