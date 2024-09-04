#include <stdio.h>

int func1(int a);
int num = 0;
int result = 0;

int main(void)
{
    scanf("%d", &num);

    result =  func1(num);

    printf("%d\n", result);

    return 0;
}

int func1(int a)
{
    int p = 0;
    for (int i = 1; i <= a; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            p = p + i;
        }
    }
    return p;
}