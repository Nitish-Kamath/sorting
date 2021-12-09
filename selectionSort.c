#include<stdlib.h>
#include<stdio.h>

int min(int a[],int k, int n)
{
    int loc,min;
    min = a[k];
    loc = k;
    for(int j = k+1;j<=n-1;j++)
    {
        if(min>a[j])
        {
            min =a[j];
            loc = j;
        }
        return loc;
    }
}
int main()
{
    int a[] = {33,11,66,88,99,77,44,55,11};
    int loc, k, temp;
    for(k = 0;k<=8;k++)
    {
        loc = min(a,k,10);
        temp= a[k];
        a[k]= a[loc];
        a[loc] = temp;
    }
    for(k=0;k<=9;k++)
    {
        printf(" %d",a[k]);
    }
}
