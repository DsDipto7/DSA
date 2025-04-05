// Write a function that takes the radius of a circle as an argument and returns its area.
#include<bits/stdc++.h>
using namespace std;

float areaOfCircle( int r){
    float area=3.14*r*r;
    return area;
}

int main()
{
    cout<<"Enter Radius of circle : ";
    int radius;
    cin>>radius;
    cout<<"The result of circle : "<<areaOfCircle(radius)<<endl;

}