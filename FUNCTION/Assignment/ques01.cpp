// Write a function to print squares of first n natural numbers, taking n as argument to the function
#include<bits/stdc++.h>
using namespace std;

void printSquareOfSum(int n)
{
    int ans =0;
    for(int i=1;i<=n;i++)
    {
        ans=ans+(i*i);
    }
    cout<<"The result is "<<ans<<endl;
}

int main()
{
     int n;
     cout<<"Enter a natural number : ";
     cin>>n;
     printSquareOfSum(n);
}