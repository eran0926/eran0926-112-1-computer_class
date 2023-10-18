#include <iostream>
using namespace std;

long long x;
long long y;
long long sum = 0;
long long tmp;

int main()
{
    cin >> x >> y;
    
    if (x>y){
        tmp = x;
        x = y;
        y = tmp;
    }
    
    for (int i=x;i<=y; i++){
        sum += i;
    }
    
    cout << sum << endl;
    
    return 0;
}
