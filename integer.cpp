// Copyright 2025 Viviana Hurtado
// Created by Viviana Hurtado
// March 26, 2025
// This program tells if the input
// is a positive or negative number
#include <iostream>

int main() {
    int user_num;  // Set variable for the number

    std::cout << "Enter a number: ";
    std::cin >> user_num;

    if (user_num > 0) {
        std::cout << user_num << " is a positive number.";  // If it's pst.
    } else if (user_num < 0) {
        std::cout << user_num << " is a negative number.";  // If it's neg.
    } else {
        std::cout << user_num << " is zero!";  // Check if it's zero
    }

    return 0;
}
