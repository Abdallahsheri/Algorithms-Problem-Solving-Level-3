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
//Problem #30 Count Letters.

string ReadString()
{
    string S1;
    cout << "Please enter your String : " << endl;
    getline(cin, S1);
    return S1;
}

char ReadChar()
{
    char Ch1;
    cout << "Please enter Your Character : " << endl;
    cin >> Ch1;
    return Ch1;
}

short CountLetter(string S1, char Letter)
{
    short Counter = 0;

    for (short i= 0; i < S1.length(); i++)
    {
        if (S1[i] == Letter)
        {
            Counter++;
        }
    }
    return Counter;
}

int main() {
    
    string S1 = ReadString();
    char Ch1 = ReadChar();

    cout << "Letter " << Ch1 << " Count = " << CountLetter(S1, Ch1) << endl;

    system("pause>0");
}
