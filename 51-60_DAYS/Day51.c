//Q101: Print first and last occurrence of target in sorted array

#include <stdio.h>
#include <stdlib.h>

int first_occurrence(int *arr, int n, int target) {
    int left=0, right=n-1, res=-1;
    while (left <= right) {
        int mid = (left + right)/2;
        if (arr[mid] == target) {
            res = mid;
            right = mid - 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else right = mid - 1;
    }
    return res;
}

int last_occurrence(int *arr, int n, int target) {
    int left=0, right=n-1, res=-1;
    while (left <= right) {
        int mid = (left + right)/2;
        if (arr[mid] == target) {
            res = mid;
            left = mid + 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else right = mid - 1;
    }
    return res;
}

int main() {
    int arr[] = {1,2,2,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    int f = first_occurrence(arr, n, target);
    int l = last_occurrence(arr, n, target);
    printf("%d %d\n", f, l);
    return 0;
}