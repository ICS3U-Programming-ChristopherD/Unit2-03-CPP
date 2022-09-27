// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Chris Di Bert
// Date: Sep.26, 2022
// This program calculates circumference of a circle using tau.

#include <cmath>
#include <iostream>

int main() {
    const double TAU = M_PI * 2;
    // Asks the user if they would like to enter the radius or diameter
    float userChoice;
    std::cout << "Enter '1' to calculate with the radius. \n";
    std::cout << "Enter any number other than '1' to use the diameter. \n";
    std::cout << ">> ";
    std::cin >> userChoice;

    if (userChoice == 1) {
    // Calculating using radius
        double userRadius;
        std::cout << "Enter the radius of the circle (cm): \n";
        std::cin >> userRadius;
        std::cout << "The circumference of the circle is "
                  << TAU * userRadius << "cm." << std::endl;
    } else {
    // Calculating using diameter
        // Calculating using diameter
        double userDiameter;
        std::cout << "Enter the diameter of the circle (cm): \n";
        std::cin >> userDiameter;
        std::cout << "The circumference of the circle is "
                  << TAU * (userDiameter / 2) << "cm." << std::endl;}
}
