#include <iostream>
using namespace std;
int main()
{
    int d;
    cin >> d;

    if (d <= 1500)
    {
        cout << 70 << endl;
    }
    else if (d <= 10000)
    {
        d -= 1500;
        if (d % 500 == 0)
        {
            cout << 70 + (d / 500) * 5 << endl;
        }
        else
        {
            cout << 70 + (d / 500) * 5 + 5 << endl;
        }
    }
    else
    {
        cout << "Sleeping in school" << endl;
    }

    return 0;
}
