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
//Problem #1 3x3 Random Matrix




int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void FillMatrixWithRandomNumber(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1,100);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "   ";
        }
        cout << endl;
    }
}


int main() {
 
    srand((unsigned) time (NULL));

    int arr[3][3];

    FillMatrixWithRandomNumber(arr,3,3);

    cout << "The following is a 3x3 random matrix : " << endl;
    PrintMatrix(arr,3,3);

    system("pause>0");
    return 0;
}
