#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cin >> a >> b;

    cout << "The coordinate point (" << a << "," << b << ") lies ";
    if (a > 0 && b > 0)
    {
        cout << "in the First quadrant.";
    }
    else if (a < 0 && b > 0)
    {
        cout << "in the Second quadrant.";
    }
    else if (a < 0 && b < 0)
    {
        cout << "in the Third quadrant.";
    }
    else if (a > 0 && b < 0)
    {
        cout << "in the Fourth quadrant.";
    }
    else if (a == 0 && b != 0)
    {
        cout << "on y axis.";
    }
    else if (a != 0 && b == 0)
    {
        cout << "on x axis.";
    }
    else
    {
        cout << "at the origin.";
    }

    cout << endl;
    return 0;
}
