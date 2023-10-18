#include <iostream>
using namespace std;
int main()
{
    int n;
    bool prime = 1;

    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            cout << i << endl;
        }
    }
    if (prime){
        cout << "prime" << endl;
    }

    return 0;
}
