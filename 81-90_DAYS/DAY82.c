// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/


#include <stdio.h>
#include <string.h>

enum TrafficLight {RED, YELLOW, GREEN};

int main() {
    char input[10];
    scanf("%s", input);

    enum TrafficLight light;

    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else
        light = GREEN;

    switch (light) {
        case RED:    printf("Stop"); break;
        case YELLOW: printf("Wait"); break;
        case GREEN:  printf("Go"); break;
    }

    return 0;
}