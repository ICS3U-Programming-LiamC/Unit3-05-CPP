// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May 13, 2021
// This program returns the name of a month after getting that months number

#include <iostream>

int main() {
    // variables
    int monthNum;

    // get the month from the user
    std::cout << "What is the months number: ";
    std::cin >> monthNum;

    switch (monthNum) {
        case 1 :
        std::cout << "January" << std::endl;
        break;

        case 2 :
        std::cout << "February" << std::endl;
        break;

        case 3 :
        std::cout << "March" << std::endl;
        break;

        case 4 :
        std::cout << "April" << std::endl;
        break;

        case 5 :
        std::cout << "May" << std::endl;
        break;

        case 6 :
        std::cout << "June" << std::endl;
        break;

        case 7 :
        std::cout << "July" << std::endl;
        break;

        case 8 :
        std::cout << "August" << std::endl;
        break;

        case 9 :
        std::cout << "September" << std::endl;
        break;

        case 10 :
        std::cout << "Octobre" << std::endl;
        break;

        case 11 :
        std::cout << "November" << std::endl;
        break;

        case 12 :
        std::cout << "December" << std::endl;
        break;

        default :
        std::cout << "That is not a month";
        break;
    }
}
