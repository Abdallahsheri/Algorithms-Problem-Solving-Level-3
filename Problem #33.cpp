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
//Problem #33 Count Vowel.

string ReadString()
{
    string S1;
    cout << "Please enter your string : " << endl;
    getline(cin, S1);
    return S1;
}

bool IsVowel(char Ch1)
{
    Ch1 = tolower(Ch1);

    return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

short CountVowelLetters(string S1)
{
    short Counter = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (IsVowel)
        {
            Counter++;

        }
    }
    return Counter;
}

int main() {
    string S1 = ReadString();
    
    cout << "Number Of Vowels Is : " << CountVowelLetters(S1);
    system("pause>0");
}
