//
// Haydin Davis
// 4/3
// Search Benchmarks Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;
#define SIZE 20

int linearSearch(int arr[], int target) {
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == target)
            return i + 1; 
    }
    return -1; 
}

int binarySearch(int arr[], int left, int right, int target, int comparisons) {
    if (right >= left) {
        comparisons++;
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return comparisons;
        }

        if (arr[mid] < target) {
            return binarySearch(arr, mid + 1, right, target, comparisons);
        }

        return binarySearch(arr, left, mid - 1, target, comparisons);
    }
    return comparisons; 
}

int main() {
    int target = 521;
    int array[] = {101, 142, 147, 189, 199, 207, 222, 234, 289, 296, 310, 319, 388, 394, 417, 429, 447, 521, 536, 600};

    cout << binarySearch(array, 0, SIZE - 1, target, 0) << " comparisons required to find " << target
         << " using binary search\n";
    cout << linearSearch(array, target) << " comparisons required to find " << target << " using linear search\n";

    return 0;
}

