//write a program to find the sum and average of elements in an array
#include <stdio.h>
int main()
{
    int arr[100], n, i;
    float sum = 0, average;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum / n;
    printf("The sum of elements in the array is: %.2f\n", sum);
    printf("The average of elements in the array is: %.2f\n", average);
    return 0;
}