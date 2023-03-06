#include <iostream>
using namespace std;

int main() {
    int num1, num2, min, gcd = 1;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;
    min = (num1 < num2) ? num1 : num2;
    for(int i = 2; i <= min; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            gcd *= i;
            num1 /= i;
            num2 /= i;
            i--;
        }
    }
    cout << "GCD is " << gcd << endl;
    return 0;
}
