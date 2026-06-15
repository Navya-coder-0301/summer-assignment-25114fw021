//frequency of an element in an array
#include <stdio.h>

int main() {
    int arr[100],n,i,target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find frequency: ");
    scanf("%d", &target);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    printf("Frequency of %d is %d\n", target, count);

    return 0;
}