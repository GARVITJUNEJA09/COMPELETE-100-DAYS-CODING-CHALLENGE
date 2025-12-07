//Q106: Next greater element for each element

#include <stdio.h>
#include <stdlib.h>

void next_greater(int *arr, int n) {
    for (int i=0; i<n; i++) {
        int ng = -1;
        for (int j=i+1; j<n; j++) {
            if (arr[j] > arr[i]) {
                ng = arr[j];
                break;
            }
        }
        printf("%d%s", ng, (i<n-1) ? "," : "\n");
    }
}

int main() {
    int arr[] = {4,5,2,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    next_greater(arr,n);
    return 0;
}