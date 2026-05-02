// print a monthly calendar
#include <stdio.h>

int main(void) {
    int n;
    int start;

    printf("Enter the number of days in a month: ");
    scanf("%d", &n);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    // date is the actual date number being printed
    // i is the current grid cell position
    // n is the total grid cells needed
    for(int i = 1, date = 1; i <= n + start - 1; ++i) {
        if(start > i)
            printf("   "); // print 3 blank spaces i.e. empty cell
        else
            printf("%3d", date++);
        
        if(i % 7 == 0)
            printf("\n"); // start a new row after every 7 cells
    }

    return 0;
} 