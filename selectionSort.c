// Basically it does selection
// for increasing order
// we will get the minimum value location in main functin and replace that value with arr[k]
// time complexity in all the case is O(n^2) and space complexity is O(1)

#include <stdlib.h>
#include <stdio.h>

int min(int arr[], int k, int n)
{

    // storing the starting element as min
    int min = arr[k];

    // and its posn as min posn
    int loc = k;
    for (int j = k + 1; j <= n; j++)
    {
        if (min > arr[j])
        {
            min = arr[j];
            loc = j;
        }
    }
    return loc;
}
int main()
{
    // declaring and initialising array with 10 element
    int arr[] = {32, 42, 40, 19, 29, 61, 78, 18, 35, 71};
    // finding length of array in c
    int len = sizeof(arr) / sizeof(int);

    int loc, k, temp;

    // why 8 not 9 , bcz if n-1 element is sorted then all element is sorted
    for (k = 0; k <= 8; k++)
    {
        // loc will get the position of minimum element
        loc = min(arr, k, len - 1);
        // now we will interchange the starter element with min element
        temp = arr[k];
        arr[k] = arr[loc];
        arr[loc] = temp;
    }

    // for printing the sorted value

    for (k = 0; k <= len - 1; k++)
    {
        printf(" %d", arr[k]);
    }
}
