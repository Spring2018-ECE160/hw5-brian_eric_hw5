#include <stdio.h>
#define MONTH_MAX 12
#define DAY_MAX_L 366
#define DAY_MAX 365

static char daytab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

/* day_of_year: set day of year from month & day */
int day_of_year(int year, int month, int day, int leap)
{
	int i;
	for (i = 1; i < month; i++)
		day += daytab[leap][i];
	return day;
}

/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday, int leap)
{
	int i;
	for (i = 1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];
	*pmonth = i;
	*pday = yearday;
}

void main() {
	int year, month, day, leap, yearday;
	int  *pmonth, *pday;
	pday = &day;
	pmonth = &month;
	printf("Please enter year, month, day: ");
	scanf("%d %d %d", &year, &month, &day);
	leap = (year%4 == 0 && year%100 != 0) || year%400 == 0;

	if(leap == 0)
		if((year > 0) && (month > 0) && (day > 0))
			if((month <= MONTH_MAX) && (day <= DAY_MAX)) {
				yearday = day_of_year(year, month, day, leap);
				printf("Day of the year is: %d\n", yearday);
				month_day(year, yearday, pmonth, pday, leap);
				printf("Month and day of month of yearday %d are: %d %d", yearday, month, day);
				return;
			}
	if(leap == 1)
                if((year > 0) && (month > 0) && (day > 0))
                        if((month <= MONTH_MAX) && (day <= DAY_MAX_L)) {
                                yearday = day_of_year(year, month, day, leap);
                                printf("Day of the year is: %d\n", yearday);
                                month_day(year, yearday, pmonth, pday, leap);
				printf("Month and day of month of yearday %d are: %d %d", yearday, month, day);
				return;
                        }
 
	printf("Sorry, you did not enter input correctly");
	return;

}
			       	

