#include <iostream>
#include <string>
#include <math.h>

#define KEY 3

using namespace std;
char alphabetEn [] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

/************** Additive Cipher **************/
//Encryption : c = (p+k) mod n
//Decryption : p = (c-k) mod n
//n = alphabet length

//This function returned position of the character on alphabet.
int findPosition(char p,int alphabetLength)
{

  for(int i=0;i<alphabetLength;i++)
  {
    if(p == alphabetEn[i]) return i;
  }
  return -1; //Not find
}

void additiveCipherEncrypt(string plainText, int key,char alphabet[], int alphabetLength)
{
  int length = plainText.length(); //Length of plain text
  string cipherText = "";
  key=key%alphabetLength;
  for(int i=0;i<length;i++)
  {
     int position = findPosition(plainText[i],alphabetLength);
     int cipherCharPos = (position + key +26) % alphabetLength;
     cipherText += alphabetEn[cipherCharPos];
  }
    cout<<cipherText;
}

void additiveCipherDecrypt(string cipherText,int key, char alphabet[])
{

}
/************** End Of Additive Cipher **************/

int main()
{
  string var;
  cout<<"Sifrelenecek metini giriniz : ";
  cin>>var;
  additiveCipherEncrypt(var,KEY,alphabetEn,26);
  return 0;
}
