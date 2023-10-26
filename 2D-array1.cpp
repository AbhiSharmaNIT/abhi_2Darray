// Ques.- How to declared 2D array .
#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter the number of rows :- \n";
    cin >> r;
    cout << "Enter the number of column :- \n";
    cin >> c;

    int arr[10][10];
    cout << "Enter the elements in the array :-\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The matrix is :- \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}