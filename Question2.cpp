#include <iostream>

using namespace std;

int main(){

    // declaring the variables
    int n;
    int i;
    double sum = 0;
    double mean;
    double median;

    cout << "Enter the number of values: ";
    cin >> n;

    int numbers[n];  // array size based on user input

    // Get numbers from the user
    cout << "Enter " << n << " numbers:\n";
    for ( i = 0; i < n; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }
    
    mean = sum / n; // the find the mean

    int mid = n / 2; // to find the middle and use it to find the median
        if (n % 2 != 0) // to find if the result of the division
        {
        median = numbers[mid];
    } 
    else {
        median = (numbers[mid - 1] + numbers[mid]) / 2;
    }

    cout << "Mean: " << mean << endl; //print the mean
    cout << "Median: " << median << endl; // print the median

    return 0;
} 