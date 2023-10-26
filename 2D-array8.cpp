// Ques.- How to build a program for the printing array on the elements.
#include <iostream>
using namespace std;

int main()
{
    int numbers[2][3];

    cout << "Enter 6 numbers: " << endl;

    // Storing user input in the array
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> numbers[i][j];
        }
    }

    cout << "The numbers are: " << endl;

    //  Printing array elements
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << "numbers[" << i + 1 << "][" << j + 1 << "]: " << numbers[i][j] << endl;
        }
    }

    return 0;
}