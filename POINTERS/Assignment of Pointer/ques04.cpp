#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 15, b = 20;
    int *ptr = &a;  // ptr points to a
    int *ptr2 = &b; // ptr2 points to b
    ptr = ptr2;     // ptr now points to what ptr2 points to (b)
    cout<<ptr<<endl;
    cout<<ptr2<<endl;
    cout<<*ptr<<endl;
    cout<<*ptr2<<endl;

    //correct ans : (a) ptr now points to b 
}