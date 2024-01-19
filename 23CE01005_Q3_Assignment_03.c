/*
    LAB ASSIGNMENT 2
    Question number: 03

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 19 Januray 2024
*/

#include <stdio.h>

int main()
{
    int n, y, m, w, d;

    printf("Enter the number of days:\n");
    scanf("%d", &n);

    y = n / 365;
    d = n % 365;
    m = d / 30;
    d = d % 30;
    w = d / 7;
    d = d % 7;

    printf("Years=%d\nMonths=%d\nWeeks=%d\nDays=%d\n", y, m, w, d);

    return 0;
}