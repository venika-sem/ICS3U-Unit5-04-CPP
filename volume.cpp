// Copyright (c) 2021 Venika Sem All rights reserved

// Created by: Venika Sem
// Created on: Dec 2022
// This program finds the volume of a cylinder

#include <math.h>

#include <iostream>

float CylinderVolumeCalculation(int radius, int height) {
    // This function finds the volume of the cylinder
    float volume;

    // Process
    volume = M_PI * (radius * radius) * height;

    return volume;
}

int main() {
    // This function gets the radius and height from the user
    std::string radius_from_user;
    std::string height_from_user;
    int radius;
    int height;
    float volume;

    // Input
    std::cout << "Enter the radius of the cylinder (cm): ";
    std::cin >> radius_from_user;
    std::cout << "" << std::endl;
    std::cout << "Enter the height of the cylinder (cm): ";
    std::cin >> height_from_user;
    std::cout << "" << std::endl;

    try {
        radius = std::stoi(radius_from_user);
        height = std::stoi(height_from_user);
        // Call function
        volume = CylinderVolumeCalculation(radius, height);
        std::cout << "The volume of a cylinder with the radius of "
                  << radius << " cm and the height of " << height << " cm is "
                  << volume << " cm³.";
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
