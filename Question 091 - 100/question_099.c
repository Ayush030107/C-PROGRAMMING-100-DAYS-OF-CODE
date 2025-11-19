#include <stdio.h>

int main() {
    char date[20], day[3], month[3], year[5];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int m;

    printf("Enter date in dd/mm/yyyy format: "); 
    scanf("%s", date);

    sscanf(date, "%2s/%2s/%4s", day, month, year);

    m = (month[0]-'0')*10 + (month[1]-'0');

    if (m >= 1 && m <= 12)
        printf("Formatted date: %s-%s-%s\n", day, months[m-1], year);
    else
        printf("Invalid month\n");

    return 0;
}

