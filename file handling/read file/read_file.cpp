#include "iostream"
#include "fstream"
#include "string"
// add namespace std

using namespace std;

int main(){
    // create data type of input stream to read file
    // so use ifstream object from fstream header file
    // name the variable file

    ifstream file("file.txt");
    
    // create a temp variable named myText to store each line from the file
    string myText;
    // create a variable to store each line with \n which we will use at the end
    string final;
    // Use a while loop together with the getline() function to read the file line by line
    while (getline (file, myText)) {
        // the loop adds data to the myText variable of each line
        // and at this line we concentrate the previous final data with the new myText data
        // and with a new line becuase it goes to another line
        final = final + myText + "\n";
    }   

    // finally print the total read output of the file
    cout << final;
    return 0;
}
