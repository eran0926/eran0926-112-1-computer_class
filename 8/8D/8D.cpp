#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    bool prime = 1;
    cin >> n;
    for (int i=2;i<n;i++){
        if (n%i == 0){
            prime = 0;
            sum += i;
        }
    }    
    if (prime){
        cout << "XD" << endl;
    }
    else {
        cout << sum << endl;
    }
    
    return 0;
}
