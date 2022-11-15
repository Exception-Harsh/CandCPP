#include <stdio.h>

void selection(int arr[], int n)
{
    int small;
    for (int i = 1; i < n ; i++)
    {
        small = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
                small = j;
        }
        int temp = arr[small];
        arr[small] = arr[i];
        arr[i] = temp;
    }
}

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[5], b = 5;
    printf("Enter 5 elements: ");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    int n = sizeof(a) / sizeof(a[0]);
    printf("Before Sorting array elements: ");
    printArr(a, n);
    selection(a, n);
    printf("\nAfter sorting array elements: ");
    printArr(a, n);
    return 0;
}
