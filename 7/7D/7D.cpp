#include <iostream>
using namespace std;
int main()
{
    int n;
    long long sum = 0;
    long long lucky7 = 7;
    
    cin >> n;
    
    for (int i=0; i<n; i++){
        // cout << lucky7 << endl;
        sum += lucky7;
        lucky7 *=10;
        lucky7 += 7;
    }
    
    cout << sum << endl;
        
    return 0;
}
