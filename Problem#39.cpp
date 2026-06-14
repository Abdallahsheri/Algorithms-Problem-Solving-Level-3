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
//Problem #39 Join String.

string JoinString(vector <string> vString, string Delim)
{
    string S1 = "";

    for (string &s : vString)
    {
        S1 = S1 + s + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}

int main() {
  
    vector <string> vString = { "Ali","Sherif","Osama","Adam" };
    
    cout << "Vectors After Join : " << endl;
    cout << JoinString(vString, " ");
    system("pause>0");
}
