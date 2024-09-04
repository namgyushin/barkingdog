#include <stdio.h>

int func2(int arr[], int N);

int main(void)
{
    int a = 0, b = 0, c = 0;
    int arr1[] = {1,52,48};
    int arr2[] = {50,42};
    int arr3[] = {4,13,3,87};

    a = func2(arr1,3);
    b = func2(arr2,2);
    c = func2(arr3,4);

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}

int func2(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (arr[i] + arr[j] == 100)
            {
                return 1;
            }
        }
        
    }
    return 0;
}
