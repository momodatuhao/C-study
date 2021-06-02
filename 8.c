#include<stdio.h>

int quert(int n)
{
    return n*n;
}

int main()
{
    int num;
    printf("请输入一个数字 ");
    scanf("%d",&num);
    int (*p)(int);
    p=quert;
    printf("n*n=%d",(*p)(num));
}
