// How to input elements in character array?
#include <iostream>
using namespace std;

int main()
{

   int n, m;
   cout << "Enter size of 2D array : ";
   cin >> n >> m;

   int a[20][20];
   cout << "Enter elements in 2D array : ";
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         cin >> a[i][j];
      }
   }
   cout << "Out arranged 2D array is : " << endl;
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         cout << a[i][j] << "  ";
      }
      cout << endl;
   }

   return 0;
}
