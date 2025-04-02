#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x =119;
    int *p=&x; // stores address of x
    cout<<p<<endl;
    int **ptr=&p; // ** (double pointer) stores address of pointer;
    cout<<ptr<<endl;
    cout<<*p<<endl;
    cout<<*ptr<<endl;
    cout<<*(&ptr)<<endl;
    cout<<**ptr<<endl;
}