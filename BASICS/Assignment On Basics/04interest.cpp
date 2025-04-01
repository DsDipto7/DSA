//Take input of principle, time and rate and find the simple interest

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int principle,time,rate;
    cout << "Enter Principle : " << endl;
    cin >> principle;
    cout << "Enter time : " << endl;
    cin>>time;
    cout<< "Enter rate :" <<endl;
    cin>>rate;
    cout<<"The simple interest :"<<(principle*time*rate)/100 <<endl;
}