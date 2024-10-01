#include <iostream>

int main () {

    //Braced initializers
    //variables can contain random garbage value. WARNING
    /*int elephant_count;

    int lion_count {};

    int dog_count {10};

    int cat_count {15};

    int domesticated_animals {dog_count + cat_count};

    //int new_variable {does_not_exist}; //improper initialization as the variable in braces does not exist

    //int new_variable1 {2.9}; //improper conversion from double to int

    std::cout << elephant_count <<std::endl;
    std::cout << lion_count << std::endl;
    std::cout << domesticated_animals << std::endl;*/

    //Functional Initializers
    int apple_count (5);
    int orange_count (10);
    int fruit_count (apple_count + orange_count);
    //int bad_initialization (doesnt_exist3 + doesnt_exist4);

    //Information lost. Less safe than braced initializers
    int narrowing_conversion_functional (2.9);

    std::cout << apple_count <<std::endl;
    std::cout << orange_count << std::endl;
    std::cout << fruit_count << std::endl;
    std::cout << narrowing_conversion_functional << std::endl;


    return 0;

}