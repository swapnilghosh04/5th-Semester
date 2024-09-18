#include <iostream>

int main () {

    int first_number {3};
    int second_number {7};

    std::cout << "First Number : " << first_number << std::endl;
    std::cout << "Second Number : " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl;

    return 0;
}