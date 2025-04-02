#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d =100;
    int *p=&d;
    cout<<p<<endl; 
    p=p+1;         //Add 4 bytes
    cout<<p<<endl;
    p=p-1;
    cout<<p<<endl;

    double x =12.333335;
    double *ptr =&x;
    cout<<ptr<<endl;
    ptr=ptr+1;     //Add 8 bytes
    cout<<ptr<<endl;

}