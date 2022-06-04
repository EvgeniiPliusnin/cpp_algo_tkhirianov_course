#include <iostream>

int euclidGCD(int a, int b){
    while (a != b){
        if (a > b){
            a -= b; 
        } else {
            b -= a;
        }
    }
    return a;
}

int main() {
    using namespace std;
    {
        int x, y;

        cout << "Enter integer. x = ";
        cin >> x;
        cout << "Enter integer. y = ";
        cin >> y;
        cout << "GCD(x, y) = " << euclidGCD(x, y) << endl;
    } // namespace std;
    
}