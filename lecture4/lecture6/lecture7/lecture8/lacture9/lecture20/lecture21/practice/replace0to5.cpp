#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;   // Read input as string

    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '0') {
            n[i] = '5';   // Replace 0 with 5
        }
    }

    cout << n;
    return 0;
}
