
#include <iostream>
#include <cstring>

using namespace std;

void Toupper(char n);
void Tolower(char m);

int main()
{

  Toupper('q');
  Toupper('u');

  Tolower('Q');
  Tolower('U');

}


void Tolower(char m)
{
  if (m == ' ')
  {
    cout << 0;
  }
  else if(m>=65 && m<=90)
  {
    int b = tolower(m);
    cout << (char)b << endl;
  }
}


void Toupper(char n)
{
  if (n == ' ')
  {
    cout<< 0;
  }
  else if(n>=97 && n<= 122)
  {
    int d = toupper(n);
    cout <<  (char)d << endl;
  }
}
