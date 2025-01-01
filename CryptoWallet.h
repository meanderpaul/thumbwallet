#ifndef CRYPTOWALLET_H
#define CRYPTOWALLET_H

#include <map>
#include <string>
#include <functional>
#include "CryptoManager.h"

class CryptoWallet {
public:
    void displayCryptoScreen();
private:
    std::map<std::string, std::function<void()>> menuOptions;
    void showPrivateKey();
    void generateNewAddress();
    std::string getTotalHeldCoins();
    CryptoManager cryptoManager;
};

#endif
