/*  
    LAB ASSIGNMENT 2
    Question number: 05

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 19 Januray 2024
*/

#include <stdio.h>

int main()
{
    int n,a=1;
    printf("Input the number to check if even or odd\n");
    scanf("%d", &n);

    if((a&n)==a)
    {
        printf("The number %d is odd.\n",n);
    }

    else
    {
        printf("The number %d is even.\n",n);
    }
    return 0;

}