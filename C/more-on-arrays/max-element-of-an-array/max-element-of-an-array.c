#include "stdio.h"

int max_element_in_an_array(int arr[], int size)
{
    int largest_number = arr[0];
    for (int i = 0; i < size; i++)
    {
        int element = arr[i];
        if (largest_number < element)
        {
            largest_number = element;
        }
        
    }

    return largest_number;
    
}



void print_arr(int arr[], int size) // a function just to print the arr with a single space between each element
{
    for (int i = 0; i < size; i++) // iterate over the array
    {
        printf("%d ", arr[i]); // and print the element with a space
    }
    printf("\n"); // print a single line break to make the output clean for the next output
}

int main()
{
    int arr[] = {4.4, 6.33, 4.434, 7.43, 3.434, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The original array is ");
    print_arr(arr);


}
