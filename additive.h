#ifndef ADDITIVE_H
#define ADDITIVE_H

#include <string>

using namespace std;

class Additive
{
    public:
        static short findPosition(char p,short alphabetLength);
        static string encrypt(string plainText,short key,char alphabet[],short alphabetLength);
        static string decrypt(string cipherText,short key,char alphabet[],short alphabetLength);
};

#endif