/*
    LAB ASSIGNMENT 2
    Question number: 07

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 19 Januray 2024
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float meal,tip_per,tax_per;
    float tip,tax;

    printf("Enter the meal price\n");
    scanf("%f",&meal);
    printf("Enter the tip percent\n");
    scanf("%f",&tip_per);
    printf("Enter the tax percent\n");
    scanf("%f",&tax_per);
    
    tip=meal*(tip_per)/100.0;
    tax=meal*(tax_per)/100.0;

    float final=meal+tip+tax;

    printf("The total cost of the meal is %.0f",round(final));
    return 0;
}