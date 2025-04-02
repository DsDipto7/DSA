// Sum of Two number using pointers

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    int * a=&x;
    int * b=&y;
    cout<<"Enter The First Number :";
    cin>>*a;
    cout<<"Enter The Second Number :";
    cin>>*b;
    cout<<"The sum  is :"<<*a+*b<<endl;

}
