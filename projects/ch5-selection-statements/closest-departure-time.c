#include <stdio.h>
#include <stdlib.h>

int main() {
    int departure_time1 = 480;
    int arrival_time1 = 616;

    int departure_time2 = 583;
    int arrival_time2 = 712;

    int departure_time3 = 679;
    int arrival_time3 = 811;

    int departure_time4 = 767;
    int arrival_time4 = 900;

    int departure_time5 = 840;
    int arrival_time5 = 968;

    int departure_time6 = 945;
    int arrival_time6 = 1075;

    int departure_time7 = 1140;
    int arrival_time7 = 1280;

    int departure_time8 = 1305;
    int arrival_time8 = 1438;

    printf("Enter a 24-hour time (hh:mm): ");
    int hour, minute;
    scanf("%d:%d", &hour, &minute);

    int time = hour * 60 + minute;

    // Assume the first time is the best
    int arrival_time = arrival_time1;
    int departure_time = departure_time1;
    int closest_time = abs(time - departure_time1);

    //For each subsequent departure, see if it is closer
    //closer to the desired departure time. If so make
    //It the new departure and arrival time


    if (abs(departure_time2 - time) < closest_time)
    {
        // This departure time is closer to the desired
        // time. Set arrival time and departure time to it and
        // update closest time
        departure_time = departure_time2;
        arrival_time = arrival_time2;
        closest_time = abs(departure_time2 - time);
    }
    
    if (abs(departure_time3 - time) < closest_time)
    {
        departure_time = departure_time3;
        arrival_time = arrival_time3;
        closest_time = abs(departure_time3 - time);
    }
    if (abs(departure_time4 - time) < closest_time)
    {
        departure_time = departure_time4;
        arrival_time = arrival_time4;
        closest_time = abs(departure_time4 - time);
    }
    if (abs(departure_time5 - time) < closest_time)
    {
        departure_time = departure_time5;
        arrival_time = arrival_time5;
        closest_time = abs(departure_time5 - time);
    }
    if (abs(departure_time6 - time) < closest_time)
    {
        departure_time = departure_time6;
        arrival_time = arrival_time6;
        closest_time = abs(departure_time6 - time);
    }
    if (abs(departure_time7 - time) < closest_time)
    {
        departure_time = departure_time7;
        arrival_time = arrival_time7;
        closest_time = abs(departure_time7 - time);
    }
    if (abs(departure_time8 - time) < closest_time)
    {
        departure_time = departure_time8;
        arrival_time = arrival_time8;
        closest_time = abs(departure_time8 - time);
    }
    
    int d_hour = departure_time / 60;
    int d_minute = departure_time % 60;
    int a_hour = arrival_time / 60;
    int a_minute = arrival_time % 60;

    if (d_hour == 12)
    {
        printf("Closest departure time is 12:%02d p.m., ", d_minute);
    }
    else if (d_hour < 12)
    {
        printf("Closest departure time is %d:%02d a.m., ", d_hour, d_minute);
    }
    else
    {
        printf("Closest departure time is %d:%02d p.m., ", d_hour - 12, d_minute);
    }

    if (a_hour == 12)
    {
        printf("arriving at 12:%02d p.m.\n", a_minute);
    }
    else if (a_hour < 12)
    {
        printf("arriving at %d:%02d a.m.\n", a_hour, a_minute);
    }
    else
    {
        printf("arriving at %d:%02d p.m.\n", a_hour - 12, a_minute);
    }
}