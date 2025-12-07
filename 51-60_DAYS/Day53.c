//Q103: Find pivot index where left sum = right sum

#include <stdio.h>
#include <stdlib.h>

int pivot_index(int *arr, int n) {
    int total=0, left_sum=0;
    for (int i=0; i<n; i++) total+=arr[i];
    for (int i=0; i<n; i++) {
        if (left_sum == total - left_sum - arr[i])
            return i;
        left_sum += arr[i];
    }
    return -1;
}

int main() {
    int arr[] = {1,7,3,6,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", pivot_index(arr, n));
    return 0;
}