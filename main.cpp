#include <iostream>
#include "PinManager.h"
#include "CryptoWallet.h"

int main() {
    PinManager pinManager;
    CryptoWallet cryptoWallet;

    pinManager.displayLoginScreen();
    if (pinManager.verifyPin()) {
        cryptoWallet.displayCryptoScreen();
    }
    return 0;
}
