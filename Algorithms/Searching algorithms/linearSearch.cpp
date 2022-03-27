#include <iostream>

//non-recursive version
int linearSearch(int arr[], int item, int n) {
    for (int i = 0; i < n; i++){
        if (arr[i] == item) {
            return i;
        }
    }

    return -1;
}

//recursive version
int recursiveLinear(int arr[], int item, int n, int left, int right) {
    if (right < left) {
        return -1;
    }
    if (arr[left] == item) {
        return left;
    }
    if (arr[right] == item) {
        return right;
    }
    else {
        return recursiveLinear(arr, item, n, left + 1, right - 1);
    }

}
int main(void) {
    int arr[] = {2, 1, 22, 14, 19, 43, 28, 36, 17};
    int item = 36;
    int n = sizeof(arr)/sizeof(arr[0]);


    int result = linearSearch(arr, item, n-1);
    if (result != -1) {
        printf("Item %d found at index: %d\n", item, result);
    }
    
    int x = recursiveLinear(arr, item, n, 0, n-1);
    if (x != -1) {
        printf("Item %d found at index: %d",item, x);
    }

    return 0;
}
