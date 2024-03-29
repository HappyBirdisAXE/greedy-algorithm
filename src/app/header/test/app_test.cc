#include "app_test.h"

bool test_get_cents(float* input) {
    assert(input != 0);

    float change = *input;

        if(std::cin.fail())
            {
                //Tells user that their input was incorrect, then clears the stream for 
                //another attempt until user inputs correct information
                std::cout << "You've enter an incorrect input" << std::endl;

                std::cin.clear();
                std::cin.ignore(__INT_MAX__, '\n');
                return false;
            }

        else if(change < 0)
        {
            std::cout << "Do not enter a number less than 0." << std::endl;
            return false;
        }

        else return true;
}