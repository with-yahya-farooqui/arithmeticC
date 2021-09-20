#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter 2 numbers.\n");
    scanf("%d%d",&a,&b);
    printf("Sum of numbers:%d\nDifference of numbers:%d\nProduct of numbers:%d\nDivision of numbers:%lf",a+b,a-b,a*b,(a*1.0)/b);
}