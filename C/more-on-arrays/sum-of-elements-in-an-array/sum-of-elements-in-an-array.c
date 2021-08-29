#include <stdio.h> // include the stdio.h header file as it is the standard header file in C

int sum_of_array(int arr[], int size) // a function just to return the sum of an int array you can change if you want
{
    int sum = 0; // initialize an int variable with value 0
    /*
        User Attention
        At the above line we declared an int variable because the array was of int numbers
    */

    // iterate over the array
    for (int i = 0; i < size; i++)
    {
        sum += arr[i]; // add the element of the array with the sum variable
        /*
            We used += because that helps us to add the number to the variable directly
            we could even use
            sum = sum + arr[i];
            but that depends upon you
        */
    }
    return sum; // at last return the
}

void print_arr(int arr[], int size) // a function just to print the arr with a single space between each element
{
    for (int i = 0; i < size; i++) // iterate over the array
    {
        printf("%d ", arr[i]); // and print the element with a space
    }
    printf("\n"); // print a single line break to make the output clean for the next output
}

int main() // create the main function which will be executed
{
    int arr[] = {3, 5, 1, 6, 5};             // create a simple int array
    int size = sizeof(arr) / sizeof(arr[0]); // get the size of the array
    print_arr(arr, size);                    // print the arr first for sample
    int sum;                                 // create a variable for storing the sum of the array
    sum = sum_of_array(arr, size);           // assign the array sum to the sum variable
    printf("%d", sum);                       // print the sum of the variable
}

/*
        This Program was made on 29 August 2021 for C Github Archive Program
        By Padmashree Jha
        https://github.com/codewithpom
        padmashreejha717@gmail.com
        contact me for queries
        This file should belong to this repository - https://github.com/codewithpom/C-archive
        Thank you
*/