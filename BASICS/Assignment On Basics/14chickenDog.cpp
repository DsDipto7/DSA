#include <bits/stdc++.h>
using namespace std;

int main()
{
    int heads, legs;
    cout << "Enter the total number of heads: ";
    cin >> heads;
    cout << "Enter the total number of legs: ";
    cin >> legs;

    int dogs = (legs - 2 * heads) / 2;
    int chickens = heads - dogs;

    if (dogs >= 0 && chickens >= 0 && (2 * chickens + 4 * dogs == legs))
    {
        cout << "Dogs -> " << dogs << ", Chickens -> " << chickens << endl;
    }
    else
    {
        cout << "Invalid input!" << endl;
    }

    return 0;
}
