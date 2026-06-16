//to find maximum frequency element in an array
#include <stdio.h>
int main()
{
    int n, arr[100], i, j, max_freq = 0, max_element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++)
    {
        int freq = 0;
        for (j=0; j<n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        if (freq > max_freq)
        {
            max_freq = freq;
            max_element = arr[i];
        }
    }
    printf("Maximum frequency element is: %d with frequency %d", max_element, max_freq);
    return 0;
}