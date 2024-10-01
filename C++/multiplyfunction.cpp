#include <iostream>

int multiplyNumbers (int first_param, int second_param) {

    int result = first_param * second_param;
    return result;

}

int main () {

    int first_number {3}, second_number {7};

    int product = first_number * second_number;
    std::cout << "Product : " << product << std::endl;

    product = multiplyNumbers (10, 3);
    std::cout << "Product : " << product << std::endl;

    std::cout << "Product : " << multiplyNumbers (10, 3) << std::endl;
    return 0;

}