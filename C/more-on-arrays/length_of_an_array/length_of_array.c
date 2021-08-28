#include "stdio.h" // include the stdio.h header file as it is the standard header file in C

int main() // create the main function which will be executued
{
    int arr[] = {8, 5, 4, 7, 3, 4};
    int memory_taken_by_arr = sizeof(arr);

    int memory_taken_by_any_element_of_arr = sizeof(arr[0]);

    int length_of_arr = memory_taken_by_arr / memory_taken_by_any_element_of_arr;

    printf("%d", length_of_arr);
}
