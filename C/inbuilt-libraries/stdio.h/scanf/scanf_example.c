#include "stdio.h" // include the stdio.h header file for scaf usage
/*
        scanf in a function to take input from the user

*/
int main() // create the main function which will be execututed
{
    float number;

    /*
        At the line above we are declaring a float variable. 
        I have chosen float for variable type because it can even store decimal numbers and int numbers
    */
    printf("Enter a number"); // here we are asking question from the user
    scanf("%f", &number);
    /*
         At the line above we are taking input from the user and I put "%f" because we want to take float input
         and then the variable name in which we want to allocate the input result with '&' this char.
    */

    printf("You entered %f", number); // here I am printing the number variable again I used "%f" because it is a float number 

    
    /*
            This Program was made on 26 August 2021 for C Github Archive Program
            By Padmashree Jha
            https://github.com/codewithpom
            padmashreejha717@gmail.com
            contact me for queries
            This file should belong to this repository - https://github.com/codewithpom/C-archive
            Thank you
    */
   
}
