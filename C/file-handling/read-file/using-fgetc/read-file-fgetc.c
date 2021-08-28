#include <stdio.h>  // include the stdio.h library as it is the standard C library

int main() // the main function which will be executued
{

    FILE *file = fopen("file.txt", "r"); // declare a file I/O variable named file and here we are opening the file.txt file
    char c;                              // declare a character variable to store each line from the file in this variable
    if (file)                            // check if the file was opened correctly or not
    {
        while ((c = fgetc(file)) != EOF) // check if we are at the end of the file if not then put the character in the variable named 'c'
        {
            printf("%c", c); // print the character from the file and we used "%c" because it is a character
        }
    }

    else // else if the file was not opened correctly then 
    {
        printf("%s", "Error in Opening the file"); // print that there was some error in opening the file
    }

    fclose(file); // at last close the file and by this all the memory is realeased and the contact to file is broken
    return 0;
}


    /*
            This Program was made on 27 August 2021 for C Github Archive Program
            By Padmashree Jha
            https://github.com/codewithpom
            padmashreejha717@gmail.com
            contact me for queries
            This file should belong to this repository - https://github.com/codewithpom/C-archive
            Thank you
    */