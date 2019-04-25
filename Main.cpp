#include <iostream>
#include <string>
#include <math.h>
#include "additive.h"

#define KEY 3

using namespace std;
char alphabetEn [] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


int main()
{
  string var;
  cout<<"Sifrelenecek metini giriniz : ";
  cin>>var;
  string ret = Additive::encrypt(var,KEY,alphabetEn,26);
  cout<<"ret : "<<ret<<endl;
  string dec = Additive::decrypt(ret,KEY,alphabetEn,26);
  cout<<"dec: "<<dec<<endl;
  return 0;
}
