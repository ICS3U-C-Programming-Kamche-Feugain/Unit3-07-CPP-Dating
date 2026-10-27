// Copyright (c) 2026 Kamche All rights reserved.
// .
// Created by: Your Kamche
// Date: Oct 27, 2026
// This program asks the grandparents to ask the user
// for an approved age to date
// and checks if it is a valid integer or not
#include <iostream>
#include <string>


int main() {
    // define constants
    const int MIN = 25;
    const int MAX = 40;

    // define variables
    int userdateAgeInt;

    // get user dating age
    std::string userdateAgeStr;
    std::cout << "Enter your dating age :";
    std::cin >> userdateAgeStr;
    std::cout << "\n";

    // check eligibility
    try {
        // check if the user entry is integer
        int userdateAgeInt = std::stoi(userdateAgeStr);

        // check the user age range
        if (userdateAgeInt > MIN && userdateAgeInt < MAX) {
            std::cout << "You can date my granddaughter";
            std::cout << "\n";
        } else if (userdateAgeInt <= MIN && userdateAgeInt >=0) {
            std::cout << "You are too young to date my granddaughter"
            << std::endl;
            std::cout << "We do not approve this relationship" << std::endl;
        } else if (userdateAgeInt >= MAX) {
            std::cout << "You are to old to date my granddaughter" << std::endl;
            std::cout << "We do not approve this relationship." << std::endl;
        } else if (userdateAgeInt < 0) {
            std::cout << "This is a valid integer,"
            "but not a real number to date."
                      << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << userdateAgeStr << "is not a valid integer." << std::endl;
    }
    std::cout << "Thanks for your interest";
    std::cout << "\n";
}
