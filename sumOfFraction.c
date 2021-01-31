#include<stdio.h>
int main(void)
{
    int num1, num2, den1, den2, sumOfNum, sumOfDen;
    //printf("Enter the first fraction please: ");
    //scanf("%d / %d", &num1, &den1);
    //printf("Enter the second fraction please: ");
    //scanf("%d / %d", &num2, &den2);
    printf("Enter 2 fractions separated by a + sign : ");
    scanf("%d / %d + %d / %d", &num1, &den1, &num2, &den2);
    sumOfNum = num1 * den2 + num2 * den1;
    sumOfDen = den1 * den2;
    printf("la somma delle delle frazioni è %d/%d: ", sumOfNum , sumOfDen);
    return 0;
}