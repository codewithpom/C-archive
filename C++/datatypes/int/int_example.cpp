#include "iostream"
// include the basic C++ library

// add using namespace std so that we will not have to use std:: everywhere
using namespace std;

// the function which will be executated
int main(){
    // we use the int class to declare int variable
    int myNum = 1000;
    // here we named the variable MyNum you can put any and know more here
    // get more details here only for you https://www.w3schools.com/cpp/cpp_data_types_numeric.asp

    // now we will print it to see the results
    // and add a line break by endl
    // go to https://w3schools.com and search for C++ for more
    cout << myNum << endl;
    
    // now we will get the size of the int variable
    /*
        User attention sizeof() is an in-built function in C++ to get the memory taken by a
        variable becuase we are going to use it now and all thia was written on 1 August 2021
        at 3:38 PM in India.

    */

    // now we will check the size of this myNum int variable
    cout << sizeof(myNum); // This should print 4 bytes and you see the datatype.html file in
                           // the parent directory for more detail.

    return 0;

}


