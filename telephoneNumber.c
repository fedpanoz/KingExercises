#include<stdio.h>
int main(void)
{
    int g1, g2, g3;
    printf("Enter your telephone number in the form [(xxx) xxx-xxxx]: \n");
    scanf("(%d) %d-%d", &g1, &g2, &g3);
    printf("You entered %d.%d.%d\n", g1, g2, g3);
    printf("%d\n", g2);
    printf("%d\n", g3);

    return 0;
}