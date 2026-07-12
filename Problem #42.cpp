#include <cmath>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
//Problem #42
string ReplaceWordInString(string S1, string sStringToReplace, string ReplaceTo)
{
    short pos = S1.find(sStringToReplace);
    while (pos != std::string::npos)
    {
        S1 = S1.replace(pos, sStringToReplace.length(), ReplaceTo);
        pos = S1.find(sStringToReplace);
    }
    return S1;
}

int main()
{
    
    string S1 = "Welcome To Egypt, Egypt Is A Nice Country!";
    string sStringToReplace = "Egypt";
    string ReplaceTo = "USA";
    cout << "\nOrigial String\n" << S1;
    cout << "\n\nString After Replace:";
    cout << "\n" << ReplaceWordInString(S1, sStringToReplace, ReplaceTo);
    return 0;
}
