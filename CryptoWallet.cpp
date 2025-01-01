#include "CryptoWallet.h"
#include <iostream>

void CryptoWallet::displayCryptoScreen() {
    // Display Crypto Screen with Bitcoin logo, public key, and total held coins
    std::cout << "=== Crypto Wallet ===" << std::endl;
    std::cout << "Bitcoin (BTC)" << std::endl;
    std::cout << "Public Key: " << cryptoManager.getPublicKey("Bitcoin") << std::endl;
    std::cout << "Total BTC held: " << cryptoManager.getTotalCoins("Bitcoin") << std::endl;

    // Add other cryptocurrencies
    std::cout << "XRP" << std::endl;
    std::cout << "Public Key: " << cryptoManager.getPublicKey("XRP") << std::endl;
    std::cout << "Total XRP held: " << cryptoManager.getTotalCoins("XRP") << std::endl;

    std::cout << "Ethereum (ETH)" << std::endl;
    std::cout << "Public Key: " << cryptoManager.getPublicKey("Ethereum") << std::endl;
    std::cout << "Total ETH held: " << cryptoManager.getTotalCoins("Ethereum") << std::endl;

    // Menu options
    menuOptions = {
        {"View Private Keys", std::bind(&CryptoWallet::showPrivateKey, this)},
        {"Generate New Address", std::bind(&CryptoWallet::generateNewAddress, this)}
    };

    for (const auto& option : menuOptions) {
        std::cout << option.first << std::endl;
    }
}

void CryptoWallet::showPrivateKey() {
    std::cout << "=== Private Keys ===" << std::endl;
    std::cout << "Bitcoin Private Key: " << cryptoManager.getPrivateKey("Bitcoin") << std::endl;
    std::cout << "XRP Private Key: " << cryptoManager.getPrivateKey("XRP") << std::endl;
    std::cout << "Ethereum Private Key: " << cryptoManager.getPrivateKey("Ethereum") << std::endl;
}

void CryptoWallet::generateNewAddress() {
    std::cout << "Generating new addresses..." << std::endl;
    cryptoManager.generateNewAddress("Bitcoin");
    cryptoManager.generateNewAddress("XRP");
    cryptoManager.generateNewAddress("Ethereum");
}

std::string CryptoWallet::getTotalHeldCoins() {
    // Placeholder function to return total coins held
    return "123.45"; // Replace with actual logic to get total coins
}
