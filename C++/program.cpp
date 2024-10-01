#include <iostream>
#include <string> //library for allowing strings to get stored

int main () {
    //Printing data
    /*std::cout << "Hello CPP" << std::endl;

    int age {21};
    //The program will know that this is a...
    std::cout << "Age : " << age << std::endl; //...simple message

    std::cerr << "Error message : Something is wrong!" << std::endl; //...error message
    std::clog << "Log message : Something happened" << std::endl; //...log message

    //Data input
    int age1;
    std::string name;

    std::cout << "Please type your name and age : " <<std::endl;

    //std::cin >> name; //data will be going through the std::cin to the name variable in the main program from the terminal
    //std::cin >> age1;

    std::cin >> name >> age;

    std::cout << "Hello " << name << ", you are " << age1 << " years old!" << std::endl;*/

    //Data with spaces

    std::string full_name;
    int age3;

    std::cout << "Please type your name and age : " << std::endl;

    std::getline(std::cin, full_name); //getline can print full data with spaces

    std::cin >>age3;

    std::cout << "Hello " << full_name << ", you are " << age3 << " years old!" << std::endl;

    return 0;
}