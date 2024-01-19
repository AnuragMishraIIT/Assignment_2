/*
    LAB ASSIGNMENT 2
    Question number: 06

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 19 Januray 2024
*/

#include <stdio.h>

int main()
{
    int n, a=1;

    printf("Enter the number:\n");
    scanf("%d", &n);

    ((100 < n) && (n < 200)) ? (((a & n) == a) ? printf("True") : printf("False")) : printf("False");

    return 0;
}