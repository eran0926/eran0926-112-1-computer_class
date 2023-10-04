#include <iostream>
using namespace std;
int main()
{
    double t, dmg;
    dmg = 0;
    cin >> t;

    if (t < 0 || t > 10000)
    {
        cout << "Get out!!" << endl;
    }
    else if (t > 1000)
    {
        cout << "RIP!!" << endl;
    }
    else
    {
        if (t > 700)
        {
            dmg += (t - 700) * 5.63;
            t = 700;
        }
        if (t > 500)
        {
            dmg += (t - 500) * 4.97;
            t = 500;
        }
        if (t > 330)
        {
            dmg += (t - 330) * 4.39;
            t = 330;
        }
        if (t > 120)
        {
            dmg += (t - 120) * 3.02;
            t = 120;
        }
        dmg += (t - 0) * 2.1;
        cout << dmg << endl;
    }

    return 0;
}
