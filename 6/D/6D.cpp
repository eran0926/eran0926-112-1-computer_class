#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << ":" << m * (i * m) * (i * m) << endl;
    }

    return 0;
}
