// Copyright (c) 2021 Venika Sem All rights reserved

// Created by: Venika Sem
// Created on: Dec 2022
// This program finds the volume of a cylinder

#include <cmath>
#include <iostream>
#include <string>

float VolumeOfASphere(int radius, int height) {
    // Calculates a cylinder's volume

    float volume;

    if (radius < 0 || height < 0) {
        return -1;
    } else {
        volume = M_PI * pow(radius, 2) * height;
        return volume;
    }
}

int main() {
    // Gets input and calls to calculate the volume of the cylinder

    int radiusInteger;
    int heightInteger;
    float cylinderVolume;
    std::string radiusText;
    std::string heightText;

    try {
        std::cout << "Enter radius of a cylinder (cm): ";
        std::cin >> radiusText;
        radiusInteger = stoi(radiusText);
        std::cout << "Enter height of a cylinder (cm): ";
        std::cin >> heightText;
        heightInteger = stoi(heightText);
        cylinderVolume = VolumeOfASphere(radiusInteger, heightInteger);
        std::cout << std::endl;
        std::cout << "This cylinder's volume is " << cylinderVolume << " cm³";
        std::cout << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
