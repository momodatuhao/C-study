#include<stdio.h>


int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}

int (*select(char c))(int,int)
{
    switch(c)
    {
        case '+':return add;
        case '-':return sub;
    }
}

int calc( int (*p)(int,int),int a,int b)
{
    return (*p)(a,b);
}
int main()
{
    int num1,num2;
    char c;
    int (*fp)(int,int);
    printf("请输入一个式子如(1+3): ");
    scanf("%d%c%d",&num1,&c,&num2);
    fp=select(c);
    printf("%d %c %d=%d\n",num1,c,num2,calc(fp,num1,num2));

}
