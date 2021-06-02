#include<stdio.h>

void print(int a[]);
void quick_sort(int a[],int left,int right)
{
    int i=left;
    int j=right;
    int temp,pivot;
    int k;
    pivot=a[(left+right)/2];
    while (i<=j)
    {
        while(a[i]<pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<=j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
        print(a);
        printf("i=%d,j=%d",i,j);
        printf("\n");
    }
    if(left<j)
    {
        quick_sort(a,left,j);
    }
    if(i<right)
    {
        quick_sort(a,i,right);
    }
}

void print(int a[])
{
    int i;
    for (i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int array[]={0,8,9,7,6,5,4,3,21,1};
    int i,length;
    length=sizeof(array)/sizeof(array[0]);
    quick_sort(array,0,length-1);
    printf("排序后的结果是： ");
    print(array);
    printf("\n");
}
