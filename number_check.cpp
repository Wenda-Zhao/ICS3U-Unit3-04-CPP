// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Dec 2020
// This program guessing random number

#include <iostream>


int main() {
    // this fuction is random number guessing

    int your_number;

    // input
    std::cout << "Enter your number: ";
    std::cin >> your_number;

    // process
    if (your_number > 0) {
        // output
        std::cout << " + ";
    // process
    } else if (your_number == 0) {
        // output
        std::cout << " 0 ";
    // process
    } else {
        // output
        std::cout << " - ";
    }
}
