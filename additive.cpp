/************** Additive Cipher **************/
//Encryption : c = (p+k) mod n
//Decryption : p = (c-k) mod n
//n = alphabet length
/*********************************************/

#include "additive.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//This function returned position of the character on alphabet.
static short Additive::findPosition(char p,short alphabetLength)
{
  for(short i=0;i<alphabetLength;i++)
  {
    if(p == alphabetEn[i]) return i;
  }
  return -1; //Not find
}

static string Additive::encrypt(string plainText, short key,char alphabet[], short alphabetLength)
{
  int length = plainText.length(); //Length of plain text
  string cipherText = "";
  key=key%alphabetLength;
  for(int i=0;i<length;i++)
  {
     short position = findPosition(plainText[i],alphabetLength);
     short cipherCharPos = (position + key +26) % alphabetLength;
     cipherText += alphabetEn[cipherCharPos];
  }
    return cipherText;
}

static string Additive::decrypt(string cipherText, short key,char alphabet[], short alphabetLength)
{
  int length = cipherText.length(); //Length of cipher text
  string plainText = "";
  key=key%alphabetLength;
  for(int i=0;i<length;i++)
  {
     short position = findPosition(cipherText[i],alphabetLength);
     short plainCharPos = (position - key +26) % alphabetLength;
     plainText += alphabetEn[plainCharPos];
  }
    return plainText;
}