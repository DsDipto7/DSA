#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x =10; // x is an integer type variable
    cout<<"Value of x :"<<x<<endl;  //It prints the value of x which is 10
    cout << "Address of x :"<<&x<<endl; // &x -> Address of x (Hexadecimal)
    int* p= &x; // P is a pointer which stores the address of x 
    cout<<p<<endl; // It will same as cout<<&x 
}