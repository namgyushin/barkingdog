#include <stdio.h>

int func4(int N);

int main(void)
{
    int a = 0, b = 0, c = 0;
    a = func4(5);
    b = func4(97615282);
    c = func4(1024);

    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    return 0;
}

// int func4(int N)
// {
//     int a = 1;
//     for (int i = 0; a <= N; i++)
//     {
//         a *= 2;
//     }
//     return a/2;    
// }

int func4(int N)
{
    int a = 1;
    while (2*a <= N)        // while (a <= N)
    {
        a *= 2;
    }
    return a;               // a/2;
}
