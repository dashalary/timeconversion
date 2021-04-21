#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minsEntered = 0;
    double years = 0.0;
    double days = 0.0;
    double minsInYear = 0.0;

    printf("Please enter the number of minutes: ");

    //get user input

    scanf("%d", &minsEntered);

    minsInYear = (60 * 24 * 365);
    years = (minsEntered / minsInYear);
    days = ((minsEntered / 60.0) / 24.0);

    printf("%d minutes is approximately %f years and %f days\n", minsEntered, years, days);

    return 0;
}