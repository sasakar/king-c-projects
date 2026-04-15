#include <stdio.h>

int main() {
    int hour, minute;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &minute);

    if (hour == 12)
    {
        printf("12:%02d PM\n", minute);
    }
    else if (hour < 12)
    {
        printf("%d:%02d AM\n", hour, minute);
    }
    else
    {
        printf("%d:%02d PM\n", hour - 12, minute);
    }

    return 0;
}