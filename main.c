#include <stdio.h>

int main(void)
{
    int sec;
    int min;
    int remain_sec;

    printf("Input the second: ");
    scanf("%d", &sec);

    min = sec / 60;
    remain_sec = sec % 60;

    printf("the time is %d:%d\n", min, remain_sec);

    return 0;
}