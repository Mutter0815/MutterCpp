#include <string>
#include <iostream>
using namespace std;



int main()
{
  string a = "egwwegeg";

  string suba = "eg";

  int c = 0;

  for (int i = 0; i < a.length(); i++)
  {
    if (a[i] == suba[0])
    {
      if (a.substr(i, suba.length()) == suba)
      {
        c++;
        i += suba.length() - 1;
      }
    }
  }

  cout << c;

}