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
//Problem #35 Print Each Word In A String.

string ReadString()
{
    string S1;
    cout << "Please enter Your String : " << endl;
    getline(cin, S1);
    return S1;
}
void PrintEachWordInString(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] == ' ')
            cout << endl;
        else
            cout << S1[i];
    }
}
int main() {
   
   
    PrintEachWordInString(ReadString());
    system("pause>0");
}
