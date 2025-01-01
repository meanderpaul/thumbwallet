#ifndef PINMANAGER_H
#define PINMANAGER_H

#include <string>

class PinManager {
public:
    void displayLoginScreen();
    bool verifyPin();
private:
    void createPin();
    std::string pin;
};

#endif
