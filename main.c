#include <stdio.h>

int main(void)
{
    unsigned int x;
    int count = 0;

    printf("input a number : ");
    scanf("%u", &x);

    for (int i = 0; i < 32; i++)
    {
        if (x & 1)
        {
            count++;
        }

        x = x >> 1;
    }

    printf("The result is %d\n", count);

    return 0;
}