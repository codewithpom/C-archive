// include the iostream library
#include "iostream"
// include fstream library for file handling
#include "fstream"

// add namespace std

using namespace std;

int main(){
    // create the word to write in the file and store it in a variable
    char *data_to_be_written = "Hello k\nMy\nName\nIs\nPom\nAnd\nI\nam\nmaking\nC++\narchive\nin\n2021😂😂";
    // create output stream variable named file and it automatically opens the file in write mode in C++ 17
    ofstream file("file.txt");
    // write to the file
    file << data_to_be_written;
    // close the file to save memory and commit changes just like git 
    file.close();



}





