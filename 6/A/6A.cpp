#include <iostream>
using namespace std;
int main()
{
    int n, s;

    cin >> n >> s;

    if (n <= 45 && n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << ": " << s + i + 1 << endl;
        }
    }
    else
    {
        cout << "Error";
    }

    return 0;
}
