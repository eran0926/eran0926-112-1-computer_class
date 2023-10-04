#include <iostream>
using namespace std;
int main(){
    
    int b[2], p[2];
    
    cin >> b[0] >> b[1] >> p[0] >> p[1];
    
    if (b[0] + b[1] > 17 && p[0] + p[1] > 17) {
        cout << "Draw." << endl;        
    }
    else if (b[0] + b[1] > 17) {
        cout << "Player wins." << endl;        
    }
    else if (p[0] + p[1] > 17) {
        cout << "Banker wins." << endl;        
    }
    else if (p[0] + p[1] <= b[0] + b[1]) {
        cout << "Banker wins." << endl;        
    }
    else {
        cout << "Player wins." << endl; 
    }
    
    return 0;
}

