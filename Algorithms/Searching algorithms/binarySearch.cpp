#include <stdio.h>

using namespace std;

//non-recursive version
int binarySearch(int arr[], int item, int n) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int middle = (left + right) / 2;

        if (arr[middle] == item) {
            return middle;
        }
        else if (arr[middle] < item) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }

    return -1;
}

//recursive version
int recursiveBinary(int arr[], int start, int end, int item, int n) {
    if (start < end) {
        return -1;
    }

    int mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] == item) {
            return mid;
        }
        else if (arr[mid] < item) {
            recursiveBinary(arr, mid + 1, end, item, n);
        }
        else {
            recursiveBinary(arr, start, mid - 1, item, n);
        }
    }

    return -1;
}

int main(void) {
    int arr[] = {1, 3, 5, 11, 13, 22, 24, 25, 35, 43, 45, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    int item = 22;
    int result = binarySearch(arr, item, n);
    int x = recursiveBinary(arr, 0, n, item, n);


    if (result != -1) {
        printf("Item %d found at index: %d", item, result);
    }
    if (x != -1) {
        printf("Item %d found at index: %d", item, x);
    }
    else {
        printf("Item not found in array!");
    }
}
