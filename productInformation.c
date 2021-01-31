#include<stdio.h>
int main(void)
{
    int item, month, day, year;
    float unit;
    printf("Enter item number: \n");
    scanf("%d", &item);
    printf("Enter unit price: \n");
    scanf("%f", &unit);
    printf("Enter purchase date (mm/dd/yyyy) : \n");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d", item, unit, month, day, year);
    return 0;
}