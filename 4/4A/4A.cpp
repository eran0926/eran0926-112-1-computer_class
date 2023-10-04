#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    double avr = a + b + c;
    cin >> a >> b >> c;
    if (a < 0 || b < 0 || c < 0 || a > 100 || b > 100 || c > 100)
        cout << "ReCheckScores" << endl;
    else
    {
        if (a < 60)
            a *= 1.25;
        if (b < 60)
            b *= 1.25;
        if (c < 60)
            c *= 1.25;
        avr = (a + b + c) / 3;
        if (avr >= 60)
            cout << "Hmm" << endl;
        else
            cout << "PleaseGoToDieOneDie" << endl;
    }
    return 0;
}
