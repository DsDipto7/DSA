// Write a program to find the product of two numbers using pointers.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    int * ptr1= &x;
    int * ptr2 =&y;
    cout<<"First Number :";
    cin>> *ptr1;
    cout<<"Second Number :";
    cin>>*ptr2;
    cout<<"Product of two number :"<<*ptr1 * *ptr2<<endl;
}