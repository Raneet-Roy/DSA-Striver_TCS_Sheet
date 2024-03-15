#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {20, 15, 26, 2, 98, 6};
    vector<int> copy = arr;

    sort(copy.begin(), copy.end()); 

    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Sorted Array: ";
    for (int num : copy) {
        cout << num << " ";
    }
    cout << endl;

    for (size_t i = 0; i < arr.size(); i++) {
        for (size_t j = 0; j < arr.size(); j++) {
            if (arr[i] == copy[j]) {
                cout << (j + 1) << " ";
                break; 
            }
        }
    }

    return 0;
}
