#include <stdio.h>

int main(void)
{
    int sec;
    int hour;
    int min;
    int remain_sec;

    printf("Input the second: ");
    scanf("%d", &sec);

    hour = sec / 3600;
    min = (sec % 3600) / 60;
    remain_sec = sec % 60;

    printf("The time is %d:%d:%d\n", hour, min, remain_sec);

    return 0;
}