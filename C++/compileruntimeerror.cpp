#include <iostream>

int main () {

    //Compile time error
    std::cout << "Hello World!" << std::endl

    //Run time error
    int value = 7/0;
    std::cout << "Value : " << value << std::endl;

    return 0;
}

// warning means a message from the compiler that we need to look after the error before it causes some serious problem. It is issued during a runtime error.
// compile time errors are generally syntax errors whereas run time errors are generally logical errors.
