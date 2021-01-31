#include<stdio.h>
int main(void)
{
    int g1, g2, g3, g4, g5;
    printf("Enter the Isbn code please : ");
    scanf("%d-%d-%d%-%d-%d", &g1, &g2, &g3, &g4, &g5);
    printf("Your Isbn is : %d-%d-%d-%d-%d\n", g1, g2, g3, g4, g5);
    printf("GS1 prefif: %d\n", g1);
    printf("Group identifier : %d\n", g2);
    printf("Publisher code: %d\n", g3 );
    printf("Item number: %d\n", g4);
    printf("Check digit: %d\n", g5);
    return 0;
}