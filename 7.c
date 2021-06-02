#include<stdio.h>

#define STR(x) # x
#define TOGETHER(x,y)  x##y
#define SHOW(...) printf(# __VA_ARGS__)
int main()
{
    printf(STR(%s   =%d\n),STR(qwe),520);
    printf("%d\n",TOGETHER(2,50));
    SHOW(qwe,123,ads);
}
