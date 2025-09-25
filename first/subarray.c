#include <stdio.h>

int maxSubarraySum(int arr[], int n, int k) {
    if (k > n) return -1; // Invalid case

    int max_sum = 0, window_sum = 0;

    // Compute sum of first window
    for (int i = 0; i < k; i++)
        window_sum += arr[i];

    max_sum = window_sum;

    // Slide the window
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum)
            max_sum = window_sum;
    }

    return max_sum;
}

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubarraySum(arr, n, k);
    printf("Maximum sum of subarray of size %d is %d\n", k, result);

    return 0;
}