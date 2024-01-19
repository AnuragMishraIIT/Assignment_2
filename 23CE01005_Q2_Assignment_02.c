/*  
    LAB ASSIGNMENT 2
    Question number: 02

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 19 Januray 2024
*/

#include <stdio.h>

int main()
{
    int a,b,c,temp,max;

    printf("Enter the three number a, b and c in order:\n");
    scanf("%d %d %d",&a,&b,&c);

    temp=(a>b)?a:b;
    max=(temp>c)?temp:c;

    printf("The maximum number is %d\n",max);

    return 0;

}