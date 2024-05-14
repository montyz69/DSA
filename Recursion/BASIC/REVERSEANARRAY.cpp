#include <bits/stdc++.h>
using namespace std;





void reverse(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }
    swap(arr[l], arr[r]);
    reverse(arr, l + 1, r - 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Declare array of size n
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elements
    }

    cout << "Before reverse:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print elements before reverse
    }
    cout << endl;

    reverse(arr, 0, n - 1); // Call reverse function

    cout << "After reverse:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print elements after reverse
    }
    cout << endl;

    return 0;
}
