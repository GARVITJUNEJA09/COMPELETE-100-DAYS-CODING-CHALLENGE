//Q102: Find ceil index of x in sorted array

#include <stdio.h>
#include <stdlib.h>

int ceil_index(int *arr, int n, int x) {
    int left=0, right=n-1, res=-1;
    while (left<=right) {
        int mid = (left+right)/2;
        if (arr[mid]>=x) {
            res = mid;
            right = mid-1;
        } else left = mid+1;
    }
    return res;
}

int main() {
    int arr[] = {1,2,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 5;
    printf("%d\n", ceil_index(arr,n,x));
    return 0;
}