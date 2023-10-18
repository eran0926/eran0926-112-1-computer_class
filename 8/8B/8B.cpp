#include <iostream>
using namespace std;
int main()
{
    int n;
    int grade;
    bool passed = 1;
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> grade;
        if (grade < 60){
            passed = 0;
        }
    }
    
    if (passed) {
        cout << "HAHA, I PASS!!! Bite me!!!" << endl;
    }
    else {
        cout << "Oh, No!!!" << endl;
    }
    
    return 0;
}
