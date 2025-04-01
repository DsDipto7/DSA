//  Explain the difference between x++ and ++x in your own words.
// Take an integer as input and :
// Print its value using post - increment(x++).
// Print its value again using pre - increment(++x).

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,b;
    d = 5;
    b=10;
    cout << "The post increment value of d is " << d++ << endl; //5
    cout<< "Now the value of d is "<< d<<endl; //6
    ++b;
    cout<<"The pre increment value of b is  "<<b<<endl; //11
    cout<<"Now the value of b is "<<b<<endl; //11
}