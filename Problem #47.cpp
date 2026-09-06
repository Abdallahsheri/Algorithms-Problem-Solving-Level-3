#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>
#include <fstream>
using namespace std;

// Problem #47 Add Clients To File

const string ClientFileName = "Clients.txt";

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

	cout << "Please Enter Your Account Number : ";
	getline(cin >> ws, Client.AccountNumber);

	cout << "Please Enter Your PinCode : ";
	getline(cin, Client.PinCode);

	cout << "Please Enter Your Name : ";
	getline(cin, Client.Name);

	cout << "Please Enter Your Phone : ";
	getline(cin, Client.Phone);

	cout << "Please Enter Your Account Balance : ";
	cin >> Client.AccountBalance;

	return Client;
}

string ConvertRecordToLine(stClient Client, string Sepeartor = "#//#")
{
	string stClientRecord;

	stClientRecord += Client.AccountNumber + Sepeartor;
	stClientRecord += Client.PinCode + Sepeartor;
	stClientRecord += Client.Name + Sepeartor;
	stClientRecord += Client.Phone + Sepeartor;
	stClientRecord += to_string(Client.AccountBalance);

	return stClientRecord;

}

void AddDataLineToFile(string FileName, string stDataLine)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);

	if (MyFile.is_open())
	{
		MyFile << stDataLine << endl;
		MyFile.close();
	}

}

void AddClient()
{
	stClient Client;
	Client = ReadNewClient();
	
	AddDataLineToFile(ClientFileName,ConvertRecordToLine(Client));
}

void AddClients()
{
	char AddMore = 'Y';

	do
	{
		system("cls");
		cout << "Adding New Client: \n\n";
		AddClient();

		cout << "\nClient Added Successfully, Do You Want To Add More Clients? Y/N";
		cin >> AddMore;
	} while (toupper(AddMore) == 'Y');

}

int main()
{
	
	AddClients();

	return 0;
}


