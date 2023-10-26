/*Ques.- Make a program for finding palendrome array. For example 'NITIN' to read from both 
 side we get same result.*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    char arr[n];
    cout<<"Enter elements in array : ";
    cin>>arr;
    
    bool check =1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] !=arr[n-1-i])
        {
            check = 0;
            break;
        }
        
    }
    if (check == true)
        cout<<"word is palendrome "<<endl;
    
    else{
        cout<<"word is not palendrome "<<endl;
    }
    return 0;
}