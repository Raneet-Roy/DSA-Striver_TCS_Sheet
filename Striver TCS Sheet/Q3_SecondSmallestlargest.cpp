#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int arr[] = {2, 4, 3, 7, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    
    cout << "2nd smallest is " << arr[1] << " 2nd largest is " << arr[n - 2] << endl;

    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = arr[n - i - 1];
    }

    cout << "Sorted array in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
