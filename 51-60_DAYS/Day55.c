//Q105: Find majority element appearing more than n/2 times

#include <stdio.h>
#include <stdlib.h>

int majority_element(int *arr, int n) {
    int count=0, candidate=-1;
    for (int i=0; i<n; i++) {
        if (count==0) {
            candidate=arr[i];
            count=1;
        } else if (arr[i]==candidate) count++;
        else count--;
    }
    count = 0;
    for (int i=0; i<n; i++)
        if (arr[i]==candidate)
            count++;
    if (count > n/2) return candidate;
    return -1;
}

int main() {
    int arr[] = {3,3,4,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", majority_element(arr,n));
    return 0;
}