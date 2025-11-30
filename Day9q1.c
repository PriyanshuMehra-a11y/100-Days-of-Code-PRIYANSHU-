#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least two integers to find the second largest.\n");
        return 1;
    }

    int arr[n];  // Declare the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second_largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (largest == second_largest) {
        printf("No distinct second largest integer found.\n");
    } else {
        printf("The second largest integer is: %d\n", second_largest);
    }

    return 0;
}
