// In this file you will see example of the sizeof function in C
#include "stdio.h" // include the stdio.h library as it is the standard libray in C

int main()
{
        int number = 9;                 // declare an int variable with value of 9
        printf("%d\n", sizeof(number)); // print the size of the variable and leave a next line for the next output
        /* 
            The above line should print 4 which means 4 bytes
        */

        float number_float = 9.3434; // create a float variable with value 9.3434
        printf("%d\n", sizeof(number_float));
        /* 
            The above line should print 4 which means 4 bytes for float
        */

        char name[] = "Padmashree Jha"; // create a string variable with value Padmashree Jha
        printf("%d\n", sizeof(name));
        /* 
            The above line should print 15 which means 15 bytes
            because it contains 14 chars and the byte size of a string is like
            n = number of characters
            byte_size = n+1
        */
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