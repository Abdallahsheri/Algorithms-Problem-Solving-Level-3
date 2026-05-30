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
//Problem #31 Count Letters.

string ReadString()
{
    string S1;
    cout << "Please enter your string : " << endl;
    getline(cin, S1);
    return S1;
}
char ReadChar()
{
    char Ch1;
    cout << "Please enter your Character : " << endl;
    cin >> Ch1;
    return Ch1;
}

char InvertedLetterCase(char Ch1)
{
    return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}

short CountLetter(string S1, char Letter, bool MatchCase = true)
{
    short Counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (MatchCase)
        {
            if (S1[i] == Letter)
            {
                Counter++;
            }

        }
        else
        {
            if (tolower(S1[i]) == tolower(Letter))
            {
                Counter++;
            }
        }
    }
    return Counter;
}
int main() {
    
    string S1 = ReadString();
    char Ch1 = ReadChar();
    cout << "\nLetter \'" << Ch1 << "\' Count = " <<
        CountLetter(S1, Ch1);
    cout << "\nLetter \'" << Ch1 << "\' ";
    cout << "Or \'" << InvertedLetterCase(Ch1) << "\' ";
    cout << " Count = " << CountLetter(S1, Ch1, false);

    system("pause>0");
}
