/*Ques.- How to find record breaking days in the following days if satisfied both of
          the following conditions:-
        (1) The number of visitors on the day is strictly larger than the number of 
            visitors on each of the previous days.
         
        (2) Either it is the last day, or the numbers of visitors on the day is strictly
            larger than the number of visitors on the following day.*/ 
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n-1];
    a[n]=-1;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    if (n == 1)
    {
        cout<<" 1 "<<endl;
        return 0;
    }
    
    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i]>mx && a[i]>a[i+1])
        {
            ans++;
        }
        mx = max(mx,a[i]);
    }
    cout<<ans<<endl;
    return 0;   
    
    
}