#include <iostream>
#include <climits> // Include this for INT_MIN

using namespace std;

int secondLargest(int arr[], int n) {
    if (n < 2) {
        return INT_MIN; // Not enough elements for second largest
    }

    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {10, 20, 5, 25, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = secondLargest(arr, n);
    if (result == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << result << endl;
    }
    return 0;
}
