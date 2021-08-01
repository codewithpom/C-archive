// include the iostream library
#include "iostream"
// include the fstream library for file handling
#include "fstream"

// add the namespace std so that we will not have to add std:: everywhere
using namespace std;

int main(){
    /*
        Copyright (C) 2021-2031 Padmashree.
        This is user guidance Please read this comment first open the test file manually
        and then see the content and then run this program and check again
        Then you will understand what is append append is simply adding more content to the file
        unlike in write mode in write mode the old content is removed and then the new data 
        is written to it so the older data is lost but in append mode the new content is added to
        the file with the old data.. Have funn...   
    */

    // now we have to create file in output stream in append mode and name it file
    // here we used ios::app becuase it contains the append mode value
    ofstream file("file.txt", ios::app);

    // now we have to create a char variable storing the data and name it as data
    char *data = "\nfor\nGithub\nArchive\nProgram\nto\nhelp\nhumanity";

    // now write the data to the file
    file << data;

    // now close the file to clear the memory and commit changes just like git and to stop process
    // on it and let other things edit it or what
    file.close();


}

