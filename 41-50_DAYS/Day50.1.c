//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[15], newDate[20];
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%14s", date);; 

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    sprintf(newDate, "%02d-%s-%04d", day, months[month - 1], year);

    printf("Formatted date: %s\n", newDate);

    return 0;
}