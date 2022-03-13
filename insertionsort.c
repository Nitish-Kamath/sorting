// printing in Ascending order
// worst case O(n^2)
// average case O(n^2)
// best case O(n)
// space complexity O(1)
#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int len)
{
    for (int i = 1; i <= len - 1; i++)
    {
        // temp will takes all element except first element
        int temp = arr[i];

        // arr[j] will takes element, starting from element prev to the temp to the starting element
        for (int j = i - 1; j >= 0 && temp < arr[j]; j--)
        {
            // if next value  is less thant the previous value then next value  will be replaced by the prev one

            // MASTER STEP
            arr[j + 1] = arr[j];
            // NOTE: after this step, NEXT VALUE AS WELL AS THE PREV VALUE HAVE THE SAME NUMERIC VALUE
        }
        // j = -1
        // arr[0] = temp;
        // shifting temp value to the previous one-

        // MASTER STEP
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = {34, 45, 11, 89, 55, 19, 22, 8, 40, 31};
    int len = sizeof(arr) / sizeof(arr[0]);
    // passing arr as well as its length, it turns it will sort all the element
    insertion_sort(arr, len);

    // element is sorted

    // printing the sorted element
    for (int i = 0; i <= len - 1; i++)
    {
        printf("%d ", arr[i]);
    }
}
