#include<stdio.h>
int main(void)
{
    int a, b, c, d, e, f, g, h, i, l, m, n, o, p, q, r;
    printf("Enter th enumber from 1 to 16 in any order: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &l, &m, &n, &o, &p, &q, &r);
    printf("%d %d %d %d\n", a, b, c, d);
    printf("%d %d %d %d\n", e, f, g, h);
    printf("%d %d %d %d\n", i, l, m, n);
    printf("%d %d %d %d\n", o, p, q, r);
    printf("\n");
    printf("Row sums: %d %d %d %d\n", (a+b+c+d), (e+f+g+h), (i+l+m+n), (o+p+q+r));
    printf("Column sums: %d %d %d %d\n", (a+e+i+o), (b+f+l+p), (c+g+m+q), (d+h+n+r));
    printf("Diagonal sum: %d %d\n", (a+f+m+r), (d+g+l+o));
    return 0;





}   