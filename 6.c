#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>


int main()
{
    char a=0,b=0;
    int *p=(int *)&b;
    *p=258;
    printf("%d--%d\n",a,b);
}
