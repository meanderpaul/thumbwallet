#include "PinManager.h"
#include <iostream>

void PinManager::displayLoginScreen() {
    std::cout << "Welcome! Please create a PIN (4-6 digits) for first time use: ";
    createPin();
}

void PinManager::createPin() {
    std::cin >> pin;
    while (pin.length() < 4 || pin.length() > 6) {
        std::cout << "Invalid PIN. Please enter a 4-6 digit PIN: ";
        std::cin >> pin;
    }
}

bool PinManager::verifyPin() {
    std::string inputPin;
    std::cout << "Enter your PIN: ";
    std::cin >> inputPin;
    if (inputPin == pin) {
        return true;
    } else {
        std::cout << "Incorrect PIN. Try again." << std::endl;
        return verifyPin();
    }
}
