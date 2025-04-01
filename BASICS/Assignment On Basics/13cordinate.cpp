#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1, y1, x2, y2;

    // Taking input from the user
    cout << "Enter the coordinates of the first point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of the second point (x2 y2): ";
    cin >> x2 >> y2;

    // Calculating Euclidean distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Displaying the result
    cout << "The Euclidean distance between the two points is: " << distance << endl;

    return 0;
}
