// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program uses user defined functions

#include <iostream>

int fahrenheit() {
    // this fucntion converts celsius to fehrenheit
    int Celsius;
    int Fahrenheit;
    
    // input
    std::cout << "Enter the temperature in celsius: ";
    std::cin >> Celsius;
    
    // process
    Fahrenheit = (Celsius * 9 / 5) + 32;
    
    // output
    std::cout << Celsius << " degree Celsius is equal to " << Fahrenheit
     << " degree Fahrenheit." << std::endl;
}


int main() {
    // this function just calls other functions
    
    // call function
	fahrenheit();
}
