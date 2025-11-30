
#include <stdio.h>

float average(int arr[], int size);

int main() {
    int n,  arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i=0; i<=n; i++){
    scanf("%d", &arr[i]);
    }
    float result = average(arr, n);
    printf("Average = %.2f\n", result);
    return 0;
}
float average(int arr[], int size)
{
    int sum = 0;
    for(i = 0;  i <= size; i++)
     {
        sum += arr[i];
    }
    return sum / size;
}

