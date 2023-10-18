#include <iostream>
using namespace std;
int main()
{
    int n;
    int num;
    bool result = 0;
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> num;
        if (num%2 == 0){
            result = 1;
        }
    }
    
    if (result) {
        cout << "Oh, No!!!" << endl;
    }
    else {
        cout << "Very Good!!!" << endl;
    }
    
    return 0;
}
