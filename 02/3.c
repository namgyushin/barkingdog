#include <stdio.h>

int func3(int a);

int main(void)
{
    int a = 0, b = 0, c = 0;

    a = func3(9);
    b = func3(693953651);
    c = func3(756580036);

    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    return 0;
}

int func3(int a)
{
    for (int i = 1; i * i <= a; i++)
    {
        if (i * i == a)
        {
            return 1;
        }
    }
    return 0;    
}