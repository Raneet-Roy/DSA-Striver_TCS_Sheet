#include <iostream>
#include <vector>

using namespace std;

int findPivotIndex(const vector<int>& arr) {
    int totalSum = 0;
    for (int num : arr)
        totalSum += num;

    int leftSum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (leftSum == totalSum - leftSum - arr[i])
            return i;
        leftSum += arr[i];
    }

    return -1;
}

int main() {
    vector<int> arr = {2, -2, 5};
    int pivotIndex = findPivotIndex(arr);
    if (pivotIndex != -1)
        cout << "Pivot Index: " << pivotIndex << endl;
    else
        cout << "No pivot index found." << endl;

    return 0;
}
