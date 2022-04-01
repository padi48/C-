#include <iostream>
#include <cmath>

using namespace std;

int jumpSearch(int arr[], int item, int n) {
    int i = 0;
    int m = sqrt(n);

    while(arr[m] <= item && m < n) {
        i = m;
        m += sqrt(n);
        if (m > n - 1) {
            return -1;
        }
    }

    for(int x = i; x < m; x++) {
        if (arr[x] == item) {
            return x;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 9, 11, 15, 23, 24, 34, 44, 45, 46};
    int item = 23;
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = jumpSearch(arr, item, n);
    if (result != -1) {
        printf("Item %d found at index: %d", item, result);
    }
    else {
        printf("Item %d not found in array!", item);
    }
}
