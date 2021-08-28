#include "stdio.h" // include the stdio.h library as it is the standard library
/* User attention
    This file tells you the datatype float
    You can know more about this in the datatypes.html file in the parent directory
*/

int main() // create the main function to write actual code
{
    float number; // at this line we are initializing a float variable named number
    /* 
        The logic of making float variable is
        float "variable name" = "variable value(without quotes)";
        
        and to just initalize the variable is this
        float "variable name";
        
        and to assign value to it at another line(after initializing it)
        "variable name" = "variable new value(without quotes)";

        Hope you understood
        Padmashree Jha
    */

    number = 8.7;         // at this line we are assigning value to the variable and the value is 8.7
    printf("%f\n", number); // we used '%f' becuase it is a float number you can know more about formatters in C by formatters.html file in the formatters directory

    number = 8; // at this line we are assigning the value to the variable again and the value is an int which is 8 and this line is just to show you that you can even assign int values to float
                // we do not use float for int becuase that is memory consuming you can even check this link https://www.geeksforgeeks.org/data-types-in-c/ if this is working in your time like in 2030 perhapse
                /* Like
    memory taken by float
    8 bytes

    memory taken by int
    4 bytes

    So double memory usage
    Hope you understood
    */

    printf("%f", number); // again on this same line we are printing the variable just with the same logiv but this time the output will be different

    // Now if you are thinking why is the output of line 40 showing 8.000000 instead of just 8 that is becuase it is a float variable right now not an int variable



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