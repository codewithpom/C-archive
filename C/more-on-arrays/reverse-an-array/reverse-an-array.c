#include "stdio.h" // include the stdio.h library as it is the standard library in C
/*
    User I prefer you to first see the logic.html file before reading this becurse that file
    will tell explain you the logic which we will use in this program.
*/

void reverseArray(int arr[], int start, int end) // create a function to reverse an array just to write less
{
    int temp;           // create a variable for storing the start
    while (start < end) // go till start to the end
    {
        temp = arr[start];     // assign the value of the number from the right hand
        arr[start] = arr[end]; // assign the end value with the starting value
        arr[end] = temp;       // now assign the value of the starting value to the end value
        start++;               // increase the start variable value by 1
        end--;                 // decrease the end value by 1
    }
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
    int arr[] = {9, 3, 5, 2, 5};             // create the array
    int size = sizeof(arr) / sizeof(arr[0]); // get the size of the array
    print_arr(arr, size);                    // print the original arr
    reverseArray(arr, 0, size - 1);          // reverse the arr
    print_arr(arr, size);                    // print the reversed arr
}

/*
            This Program was made on 28 August 2021 for C Github Archive Program
            By Padmashree Jha
            https://github.com/codewithpom
            padmashreejha717@gmail.com
            contact me for queries
            This file should belong to this repository - https://github.com/codewithpom/C-archive
            Thank you
    */
