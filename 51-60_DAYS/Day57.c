//Q107: Previous greater element for each element

#include <stdio.h>
#include <stdlib.h>

void prev_greater(int *arr, int n) {
    for (int i=0; i<n; i++) {
        int pg = -1;
        for (int j=i-1; j>=0; j--) {
            if (arr[j] > arr[i]) {
                pg = arr[j];
                break;
            }
        }
        printf("%d%s", pg, (i<n-1)?"," : "\n");
    }
}

int main() {
    int arr[] = {4,5,2,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    prev_greater(arr,n);
    return 0;
}