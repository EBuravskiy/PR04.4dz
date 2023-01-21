#include <stdio.h>

int main()
{
    int arr[100]{};
    int n, max, min, sum = 0;
    printf("Enter the number of array elements: ");
    scanf_s("%i", &n);
    printf("Enter the array elements: \n");
    for (int i = 0; i < n; i++) {
        scanf_s("%i", &arr[i]);
    }
    printf("Array elements:");
    for (int i = 0; i < n; i++) {
        printf("%2i", arr[i]);
    }
    max = min = arr[0];
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
        sum += arr[i];
    }
    float average = (float)sum / (float)n;
    printf("\nThe maximum value of an array element: %i", max);
    printf("\nThe minimum value of an array element: %i", min);
    printf("\nSum of array elements: %i", sum);
    printf("\nAverage value of array elements: %f", average);
    return 0;
}