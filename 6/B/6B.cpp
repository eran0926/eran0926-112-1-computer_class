#include <iostream>
using namespace std;
int main()
{
    int s, e;
    cin >> s >> e;

    for (int i = s; i <= e; i++)
    {
        cout << i << "C=" << i * (double)9 / 5 + 32 << "F" << endl;
    }

    return 0;
}
