#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "MyLib.h"
#include <iomanip>
#include <cctype>
#include <fstream>
using namespace std;
//Problem #37 TrimLeft, TrimRight, Trim.



string TrimLeft(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ')
        {
            return S1.substr(i, S1.length() - 1);
        }
    }
    return "";
}

string TrimRight(string S1)
{
    for (short i = S1.length() - 1; i >= 0; i--)
    {
        if (S1[i] != ' ')
        {
            return S1.substr(0, i + 1);
        }
    }
    return "";
}

string Trim(string S1)
{
    return (TrimLeft(TrimRight(S1)));
}

int main() {
  
    string S1 = "  Abdallah Sherif  ";
    cout << "\nString = " << S1;
    cout << "\n\nTrim Left = " << TrimLeft(S1);
    cout << "\nTrim Right = " << TrimRight(S1);
    cout << "\nTrim = " << Trim(S1);
    //
    system("pause>0");
}
