#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "GEO Hazami" ;
    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0) {
            cout << num << " is even.\n";
        }
    }

    return 0;
}






