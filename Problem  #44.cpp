#include <cmath>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
//Problem #44 Remove Punctuation From String...

string RemovePunctuation(string S1)
{
    string S2 = "";

    for (int i = 0; i < S1.length(); i++)
    {
        if (!ispunct(S1[i]))
        {
            S2 += S1[i];
        }
    }
    return S2;
}

int main()
{
    string S1 = "Welcome To Egypt, Egypt IS A Nice Country; It's Amazing.";
    cout << "Original String : " << S1 << endl;
    cout << "Punctuation Removed : " << RemovePunctuation(S1) << endl;
    return 0;
}
