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
//Problem #32 Is Vowel.

char ReadChar()
{
    char Ch1;
    cout << "Please enter your Character : " << endl;
    cin >> Ch1;
    return Ch1;
}
bool IsVowel(char Ch1)
{
    Ch1 = tolower(Ch1);

    return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));

}

int main() {
    
    char Ch1 = ReadChar();

    if (IsVowel)
    {
        cout << "\nYES Letter \'" << Ch1 << "\' is vowel";
    }
    else
    {
        cout << "\nNO Letter \'" << Ch1 << "\' is NOT vowel";
    }

    system("pause>0");
}
