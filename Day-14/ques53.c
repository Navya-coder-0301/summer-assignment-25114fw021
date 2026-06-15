//Linear search in an array
#include <stdio.h>

int main() {
   int arr[100], n, i, target, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}