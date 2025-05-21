#include <iostream>
using namespace std;


template <typename T>
T gcd(T a, T b) {
    while (b != 0) {
        T temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x = 36, y = 60;
    cout << "GCD(" << x << ", " << y << ") = " << gcd(x, y) << endl;

    
    long long a = 123456789, b = 987654321;
    cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << endl;

    return 0;
}
