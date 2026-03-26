#include <iostream>

using namespace std;

int main() {

    // Queue
    int queue[10];
    int front = 0;
    int back = -1;          // usually starts at -1 (empty)
    int size = 10;           
    int n = 5;

    cout << "Adding " << n << " to queue...\n"; 
 
    if (back == 9) {          // check against last index (size-1)
        cout << "Queue Overflow!\n";
    } else {
        if (front == -1) {    
            
            front = 0;
        }
        back = back + 1;
        queue[back] = n;               
        size = size + 1;               
        cout << n << " added to queue\n";
    }   

    // Stack
    int Stack[10];
    int top = 0;
    
    cout << "\n Is stack empty? ";
    
    if (count == 0) {
        cout << "YES empty\n";
    } else {
        cout << "NO, has " << count << " items\n";
    }

    return 0;
}




