#include "stdio.h" // include the stdio.h library as it is the standard library in C

int pair(int arr[], int sum, int size)
{
    
    int first_element;
    int second_element;
    for (int i = 0; i < size; i++)
    {
        first_element = arr[i];
        for (int g = i + 1; i < size; g++)
        {
            second_element = arr[g];
            if (second_element + first_element == sum)
            {
                int pair[] = {first_element, second_element};
                return pair;
            }
        }
    }
    int temp[2] = {-1, NULL};
    return temp;

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
    int arr[] = {2, 3, 2, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    print_arr(arr, size);
    int pair_numbers[2];
    pair_numbers = pair(arr, 7, size);

    if (pair_numbers)
    {
        printf("%d", -1);

    }

    else
    {
        printf("%d and %d", pair_numbers[0], pair_numbers[1]);
        
    }

}