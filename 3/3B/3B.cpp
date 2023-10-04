#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    double avr = a + b + c;
    cin >> a >> b >> c;
    avr = (a + b + c) / 3;
    if (avr < 0 || avr > 100)
    {
        cout << "BS" << endl;
    }
    else if (avr >= 60)
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;

    return 0;
}
