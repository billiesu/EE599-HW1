#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int input = 13;
    std::cout << solution.NoRecursiveFactorial(input) << std::endl;
    std::cout << solution.RecursiveFactorial(input) << std::endl;
    return EXIT_SUCCESS;
}