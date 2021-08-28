#include "stdio.h" // include the stdio.h standard C library
#include "string.h" // include the string.h library to use strcpy function to change string variable value

// This file is for the Github Archive Program in 2021 

int main()
{
    char string_variable[] = "Hello World This file is for Github Archive Program"; // here we are initializing a string value with a value
    printf("%s\n", string_variable);

    strcpy(string_variable, "Hello World This is the changed value"); // at this line we are changing the value of the string by the function strcpy you can know more in explanations directory

    printf("%s", string_variable); // at this line we are printing the variable again with the new value

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
