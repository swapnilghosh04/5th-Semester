#include <iostream>

int main () {

    int number0 {}; //Initializes to 0 by default
    int number1 {15}; // decimal
    int number2 {017}; // octal preceded by 0
    int number3 {0x0F}; // hexadecimal preceded by 0x
    int number4 {0b00001111}; //binary preceded by 0b

    std::cout << number0 << std::endl;
    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;
    std::cout << number4 << std::endl;

    return 0;
}