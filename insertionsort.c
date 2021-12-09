#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int a[], int n)
{
    int temp;
    int j;
    for (int i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = i - 1; j >= 0 && temp < a[j]; j-- )
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
    }
}

int main()
{
    int a[] = {34, 45, 11, 89, 55, 19, 22, 8, 40};
    insertion_sort(a, 9);
    for (int i = 0; i <= 8; i++)
    {
        printf("%d ", a[i]);
    }
}