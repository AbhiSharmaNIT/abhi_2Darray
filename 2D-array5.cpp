//How to declear indivisually all elements are present in the charecter array?
#include<iostream>
using namespace std;

int main(){

    char arr[100] = "Abhishek";
    int i=0;

    while (arr[i] != '\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}