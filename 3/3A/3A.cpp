#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "M" << endl;
    }
    else if (n == 0)
        cout << "Z" << endl;
    else if (n % 2 == 0)
    {
        cout << "E" << endl;
    }
    else
        cout << "O" << endl;

    return 0;
}
