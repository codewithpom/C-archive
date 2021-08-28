#include "stdio.h"

int main()
{
    int arr[] = {9, 3, 5, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int reversed_array[] = {};

    for (int index = 0; index < size; index++)
    {
        
        int reversed_index = size - (index + 1);
        reversed_array[reversed_index] = arr[index];
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", reversed_array[i]);
    }

}
