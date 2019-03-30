
#include "ciel_floor.hpp"
#include <iostream>

int main(void)
{
    for (std::string num; std::cin >> num;)
    {
        std::cout << '\t' << "num == " << num << '\n';
        std::cout << '\t' << "floor(num) == " << floor_func(num) << '\n';
        std::cout << '\t' << "ciel(num) == " << ciel_func(num) << '\n';
    }

    return 0;
}
