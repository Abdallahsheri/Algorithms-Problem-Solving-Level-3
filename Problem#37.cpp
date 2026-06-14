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
//Problem #37 Split String.

string ReadString()
{
    string S1;
    cout << "Please enter your String : " << endl;
    getline(cin, S1);
    return S1;
}

vector <string> SplitString(string S1, string Delim)
{   
    vector<string> vString;

    short Pos = 0;
    string sWord;

    while ((Pos = S1.find(Delim)) != std::string::npos)
    {   
        sWord = S1.substr(0, Pos);
        if (sWord != "")
        {
            vString.push_back(sWord);
        }
        S1.erase(0, Pos + Delim.length());
    }
    if (S1 != "")
    {
        vString.push_back(S1);
    }
    return vString;
}


int main() {
   
    vector<string> vString;
    vString = SplitString(ReadString(), " ");
    cout << "\nTokens = " << vString.size() << endl;
    for (string& s : vString)
    {
        cout << s << endl;
    }
    system("pause>0");
}
