#include <cmath>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
//Problem #45 Remove Punctuation From String...

struct stClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

stClient ReadNewClient()
{
    stClient Client;

    cout << "Please enter Account Number : " << endl;
    getline(cin, Client.AccountNumber);

    cout << "Please enter PinCode : " << endl;
    getline(cin, Client.PinCode);

    cout << "Please enter Name : " << endl;
    getline(cin, Client.Name);

    cout << "Please enter Phone : " << endl;
    getline(cin, Client.Phone);

    cout << "Please enter Account Balance : " << endl;
    cin >> Client.AccountBalance;
    
    return  Client;
}

string ConvertRecordLine(stClient Client, string Separtor = "#//#")
{
    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Separtor;
    stClientRecord += Client.PinCode + Separtor;
    stClientRecord += Client.Name + Separtor;
    stClientRecord += Client.Phone + Separtor;
    stClientRecord += to_string(Client.AccountBalance);
    return stClientRecord;
}

int main()
{
    cout << "Please enter Client Data : " << endl;

    stClient Client;
    Client = ReadNewClient();
    cout << "\n\n Client Record For Saving Is : " << endl;
    cout << ConvertRecordLine(Client);
    return 0;
}
