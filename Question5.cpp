#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0; 
    int count = 0; 
    int digit;

    // Accept input
    cout << "Enter integer values: ";
    cin >> n;

    if (n == 0) {
        count = 1;
    }

    for (n =! 0; n = n / 10; )
    {
        digit = n % 10;
        sum = sum + digit; 
        count++; 
    }
    
    cout << "Sum of digits: " << sum << endl;
    cout << "Number of digits: " << count << endl;

    return 0;
}    