#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[] = {5, 9, 4, 5, 3, 6, 8, 5, 4, 8, 7, 4, 6, 9, 7};
    int b[15];
    int k = 10;
    int n = 15;
    countsort(a, n, b, k);
    for (int i = 0; i < n; i++)
    {
        printf(" %d", b[i]);
    }
}

void countsort(int a[], int n, int b[], int k)
{
    int i, j;
    int c[k];
    for (int i = 0; i < k; i++)
    {
        c[i] = 0;
    }
    for (int j = 0; j < n; j++)
    {

        c[a[j]] = c[a[j]] + 1;
    }
    for (int i = 1; i < k; i++)
    {
        c[i]= c[i]+c[i-1];
    }
    for (int j = n - 1; j >= 0; j--)
    {
        b[c[a[j]] - 1] = a[j];
        c[a[j]] = c[a[j]] - 1;
    }
}
