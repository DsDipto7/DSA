//  Given 2 fractions, find the sum of those 2 fractions.Take the numerator and
// denominator values of the fractions from the user.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,d1,d2;
    cout << "Enter numerator and denominator of first fraction: ";
    cin>>n1>>d1;
    cout << "Enter numerator and denominator of second fraction: ";
    cin>>n2>>d2;
    cout << "Sum of fractions: "<<(n1*d2+n2*d1)/(d1*d2)<<endl;
}