#ifndef CRYPTOMANAGER_H
#define CRYPTOMANAGER_H

#include <string>

class CryptoManager {
public:
    std::string getPublicKey(const std::string& crypto);
    std::string getPrivateKey(const std::string& crypto);
    std::string getTotalCoins(const std::string& crypto);
    void generateNewAddress(const std::string& crypto);
};

#endif
