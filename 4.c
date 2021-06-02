#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10

int main(void)
{
    int *p;
    int i;
    p=(int *)malloc(N * sizeof(int));
    if (p == NULL)
    {
        printf("内存申请失败");
        exit(1);
    }
    memset(p,0,N * sizeof(int));
    for (i=0;i<N;i++)
    {
        printf("%d ",p[i]);
    }
    putchar('\n');
    free(p);
    return 0;
}
