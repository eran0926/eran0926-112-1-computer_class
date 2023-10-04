#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    double a, b, c, s, area, tmp;

    cin >> a >> b >> c;

    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (b > c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }

    if (a + b > c)
    {
        if (a * a + b * b > c * c)
        {
            cout << "acute" << endl;
        }
        if (a * a + b * b == c * c)
        {
            cout << "right" << endl;
        }
        if (a * a + b * b < c * c)
        {
            cout << "obtuse" << endl;
        }

        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << fixed << setprecision(4) << area << endl;
    }
    else
    {
        cout << "illegal" << endl;
        cout << "unavailable" << endl;
    }

    return 0;
}
