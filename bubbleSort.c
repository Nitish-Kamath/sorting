// printing in ascending order
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int len)
{

    // round + i = len
    // at end of round 1, largest element will reach to end position
    // at end of round 2, second largest element will reach to end-1 position
    // at end of round 3, third largest element will reach to the end-2 position
    // .
    // .
    // .

// if total element is 5, then we have only 4 round 
// in each round one element is assigned to its actual position
// hence for 4 round, 4 element is sorted hence 5th element is sorted as a consequenece
    for (int round = 1; round <= len - 1; round++)
    {
        for (int i = 0; i <= len - 1 - round; i++)
        {
            // sending the max element to the last
            // if prev greater than next
            // then swap
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main()
{
    // for testing purpose always take less size array

    int arr[] = {13, 11, 19, 17};
    int len = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, len);

    // element is sortd in ascending order
    for (int i = 0; i <= len - 1; i++)
    {
        printf(" %d", arr[i]);
    }
}
