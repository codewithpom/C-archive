#include "stdio.h" // include the stdio.h header file as this is the standard header file in C

int main()
{
    int numbers[] = {4, 5, 6, 3, 6}; // declare an array of size indefinite

    int size_of_array = sizeof(numbers) / sizeof(numbers[0]); // get the sizeof the numbers you can know more about this line in the next chapters in more on arrays and even in the inbuilt functions folder in the parent parent directory

    for (int i = 0; i < size_of_array; i++)
    {
        printf("%d\n", numbers[i]);
        
    }
}

    /*
            This Program was made on 26 August 2021 for C Github Archive Program
            By Padmashree Jha
            https://github.com/codewithpom
            padmashreejha717@gmail.com
            contact me for queries
            This file should belong to this repository - https://github.com/codewithpom/C-archive
            Thank you
    */