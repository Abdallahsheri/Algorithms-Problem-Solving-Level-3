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
//Problem #34 Print All Vowels In String.

string ReadString()
{
    string S1;
    cout << "Pleas enter Your String : " << endl;
    getline(cin,S1);
    return S1;
}

bool IsVowel(char Ch1)
{
    Ch1 = tolower(Ch1);

    return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

void PrintVowels(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        if (IsVowel(S1[i]))
        {
            cout << S1[i] << "  ";
        }
    }
}
int main() {
   
    string S1 = ReadString();
    PrintVowels(S1);

    system("pause>0");
}
