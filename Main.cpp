#include <iostream>
#include <string>
using namespace std;


/************** Additive Cipher **************/
//Encryption : c = (p+k) mod n
//Decryption : p = (c-k) mod n
//n = alphabet length


//This function returned position of the character on alphabet.
int findPosition(char p,char alphabet[],int alphabetLength)
{
  for(int i=0;i<alphabetLength;i++)
  {
    if(p == alphabet[i]) return i;
  }
  return -1; //Not find
}

void additiveCipherEncrypt(string plainText, int key, char alphabet[],int alphabetLength)
{
  int length = plainText.size(); //Length of plain text
  string cipherText = "";
  
  for(int i=0;i<length;i++)
  {
     int position = findPosition(plainText[i],alphabet,alphabetLength);
     int cipherCharPos = (position + key) % alphabetLength;
     cipherText += alphabet[cipherCharPos];
  }
	cout<<cipherText;
}

void additiveCipherDecrypt(string cipherText,int key, char alphabet[], int n)
{
  
}


/************** End Of Additive Cipher **************/
  
int main()
{
  char alphabetEn [] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  string plainText = "";
  int key = 0;
  cout<<"Enter the plaintext : ";
  cin>>plainText;
  cout<<endl<<"Enter the key value : ";
  cin>>key;
  additiveCipherEncrypt(plainText,key,alphabetEn,26);
  
  return 0;
}
