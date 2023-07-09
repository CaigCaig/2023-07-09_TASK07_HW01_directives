#include <iostream>
#include <string>
#include "funcs.h"

int add() {

    std::string s;
    float arg1, arg2;

    std::cout << "¬ведите число 1: ";
    try {
        std::cin >> s;
        arg1 = static_cast<float>(std::stof(s));
    }
    catch (const std::invalid_argument&) {
        return add_errors::invalid_argument;
    }

    std::cout << "¬ведите число 2: ";
    try {
        std::cin >> s;
        arg2 = static_cast<float>(std::stof(s));
    }
    catch (const std::invalid_argument&) {
        return add_errors::invalid_argument;
    }

    std::cout << "–езультат сложени€: " << arg1 + arg2 << std::endl;
    return add_errors::no_error;
}