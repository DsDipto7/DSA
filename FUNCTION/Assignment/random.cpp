// Write a function to count the number of digits in a number and then print the square of this number.
#include<bits/stdc++.h>
using namespace std;
void digitCount(int number)
{
    int count=0;
    if(number==0)
    {
        cout << "Digit in a number : " << 0 << endl;
    }
    else{

    while(number>0)
    {
       // int rem =number%10;
        number=number/10;
        count++;
    }
}
    cout<<"Digit in a number : "<<count<<endl;
    
}

int main()
{
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    digitCount(num);
    cout<<"Square of the number is "<<num*num<<endl;
}