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
//Problem #36 Count Each Word In String.

string ReadString()
{
    string S1;
    cout << "Please enter Your String : " << endl;
    getline(cin, S1);
    return S1;
}

void PrintWordsInString(string S1)
{   

    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] == ' ')
        {
            cout << endl;
        }
        else
        {
            cout << S1[i];
        }
    }
}

int CountWords(string S1)
{
    int Counter = 0; 
    bool InsideWord = false;

    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && !InsideWord)
        {
            Counter++;
            InsideWord = true;
        }
        else if (S1[i] == ' ')
        {
            InsideWord = false;
        }
    }
    return Counter;
}

int main() {
   
    string S1 = ReadString();
    cout << "Each Word In Your String Is :" << endl;
    PrintWordsInString(S1);
    cout << endl;
    cout << "The Number Of Words Is : " << CountWords(S1) <<endl;

    system("pause>0");
}
