#include "stdio.h" // include stdio.h library as this is the standard library

/* 
in this file we are making a simple program to add two numbers
Like - 
Enter First Number
2
Enter Second Number
3
The sum of 2 and 3 is 5


You can check out other files for more details of this file
C Github Archive 2021
Padmashree Jha
*/

int main() // create the main function to write the actual code
{
    
    float first_number; // variable to store the first number
    float second_number; // variable to store the second number
    printf("%s\n", "Enter first number"); // here we will ask the question it is a bit long in C
    /*
    User attention
    while taking input never forget this charachter for variable assignmnet '&'
    */

    scanf("%f", &first_number); // take the input from the user and keep it in the first_number variable

    
    printf("%s\n", "Enter second number"); // here we will again ask the question
    scanf("%f", &second_number); // take the input from the user and keep it in the second_number variable

    // calculate the sum at the line below and store in a float variable named result
    float result = first_number + second_number;

    // finally print the result 
    // with the formatting as at line 10
    printf("The sum of %f and %f is %f", first_number, second_number, result);

    // this is the end of the code and now have fun
    // From C Github Archive Program
    // This program was made in 2021
 
    /*
            This Program was made on 25 August 2021 for C Github Archive Program
            By Padmashree Jha
            https://github.com/codewithpom
            padmashreejha717@gmail.com
            contact me for queries
            This file should belong to this repository - https://github.com/codewithpom/C-archive
            Thank you
    */
      
}