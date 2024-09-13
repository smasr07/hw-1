#include <iostream>
using namespace std;
int main() {
    float a, b;
    cin >> a >> b;
    b *= 30.48;
    if (a < b) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}
