#include<stdio.h>
void main()
{
    int a = 10;
    int* ptra = &a;
    printf("%d\n",*ptra);
    printf("%p",ptra);
}
