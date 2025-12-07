//Q110: Maximum element in each subarray of size k 

#include <stdio.h>
#include <stdlib.h>

void max_in_subarrays(int *arr, int n, int k) {
    for (int i=0; i<=n-k; i++) {
        int max=arr[i];
        for (int j=i+1; j<i+k; j++)
            if (arr[j] > max)
                max = arr[j];
        printf("%d%s", max, i<n-k ? " " : "\n");
    }
}

int main() {
    int arr[] = {2,3,5,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    max_in_subarrays(arr,n,k);
    return 0;
}