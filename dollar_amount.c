#include <stdio.h>

int main(void)
{
    int dollars;
    int twenty, ten , five , one;
    printf("Dammi i dollari: $ ");
    scanf("%d", &dollars);
    twenty = dollars / 20;
    ten = (dollars - (twenty * 20)) / 10;
    five = (dollars - ((twenty * 20) + (ten * 10))) / 5; 
    one = (dollars - (((twenty * 20) + (ten * 10)) + (five * 5)))  / 1; 
    printf("numbers of 20$ is : %d\n", twenty);
    printf("numbers of 10$ is :%d\n", ten);
    printf("numbers of 5$ is : %d\n", five);
    printf("numbers of 1$ is : %d\n", one);
    //printf("numbers of 1$ is : %d\n", 
    return 0;
} 