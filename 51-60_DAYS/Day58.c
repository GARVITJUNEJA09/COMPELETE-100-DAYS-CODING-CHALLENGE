//Q108: Product of all elements except self without division

#include <stdio.h>
#include <stdlib.h>

void product_except_self(int *arr, int n) {
    int *left = (int*)malloc(n*sizeof(int));
    int *right = (int*)malloc(n*sizeof(int));
    int *answer = (int*)malloc(n*sizeof(int));

    left[0]=1;
    for (int i=1; i<n; i++) left[i] = left[i-1]*arr[i-1];
    right[n-1]=1;
    for (int i=n-2; i>=0; i--) right[i] = right[i+1]*arr[i+1];
    for (int i=0; i<n; i++) answer[i] = left[i]*right[i];

    for (int i=0; i<n; i++)
        printf("%d%s", answer[i], (i<n-1)? ", " : "\n");

    free(left);
    free(right);
    free(answer);
}

int main() {
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    product_except_self(arr,n);
    return 0;
}