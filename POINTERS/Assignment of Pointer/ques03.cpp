#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int a = 10, b = 20;
    int *ptr = &a; // ptr points to a (value = 10)
    b = *ptr + 1;  // b = 10 + 1 = 11
    ptr = &b;      // ptr now points to b
    cout << *ptr << ' ' << a << ' ' << b;   // 11 10 11 
}