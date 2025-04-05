// Given two numbers a and b, write a function to print all odd numbers between them.
#include<bits/stdc++.h>
using namespace std;
void printOddNumber(int a, int b)
{
    for(int i=a;i<=b;i++)
    {
        if(i%2==1)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    cout<<"Enter First Number : ";
    int x;
    cin>>x;
    cout<<"Enter Second Number :";
    int y;
    cin>>y;
    cout<<"The odd number between "<<x<< "and "<<y<<" are"<<endl;
    printOddNumber(x,y);

}